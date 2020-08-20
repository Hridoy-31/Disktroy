/* main.c */

/* Disktroy: A program to completely wipe the drives of its contents,
 * using various methods of obfuscation. */

/*
 * 	Copyright (C) 2020 S.M. Raihanul Bashir
 *
 *	This file is part of the Disktroy software.
 *
 *	Disktroy is free software: you can redistribute it and/or modify
 * it under the terms of the Apache License as published by the
 * Apache Software Foundation in version 2.0 of the License.
 *
 *	Disktroy is distributed in the hope that it will be useful,
 * but WITHOUT WARRANTY; without even the implicit guarantee of
 * MERCHANTABILITY or FITNESS FOR PARTICULAR PURPOSE. See
 * version 2.0 of the Apache License for more details.
 *
 *	You should have received a copy of the Apache License version 2.0
 *	along with Disktroy. If not, see
 * <https://www.apache.org/licenses/LICENSE-2.0>.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include <getopt.h>

#include "colors.h"
#include "disktroy.h"

void usage (const char* progname);
void version (const char* progname);

struct option long_opt[] = {
	{"zero",	no_argument,		0, 'z'},
	{"num-reps",	required_argument,	0, 'n'},
	{"yes",		no_argument,		0, 'Y'},
	{"help", 	no_argument, 		0, 'h'},
	{"version", 	no_argument, 		0, 'V'},
	{0,		0,			0,  0}
};

int opt_index = 0;

int main (int argc, char** argv)
{
	if (argc < 2) {
		usage(argv[0]);
		exit(EXIT_FAILURE);
	} else {
		int opt = 0;

		/* If set, don't write random bytes */
		int only_zero = 0;

		/* Number of times to repeat the procedure */
		int nreps = 1;

		/* If unset, don't ask for confirmation */
		int ask_confirm = 1;

		while ((opt = getopt_long(argc, argv, "z0n:YhV", long_opt, &opt_index)) != -1) {
			switch (opt) {
			case '0':
			case 'z':
				only_zero = 1;
				break;
			case 'n':
				nreps = atoi(optarg);
				break;
			case 'Y':
				ask_confirm = 0;
				break;
			case 'h':
				usage(argv[0]);
				exit(EXIT_SUCCESS);

			case 'V':
				version(argv[0]);
				exit(EXIT_SUCCESS);

			case '?':
				exit(EXIT_FAILURE);
			default:
				break;
			}
		}

		char** drvs = argv + optind;

		if (only_zero == 1 && argc < 3) {
			printf("Please specify at least one drive.\n");
			exit(EXIT_FAILURE);
		}

		printf("List of drives to be disktroyed:\n");

		while (*drvs != NULL) {
			printf(B_GREEN "\t%s\n" RESET, *drvs);
			++drvs;
		}
		printf("\n");
		drvs = argv + optind;

		srand(time(NULL));
		while (*drvs != NULL) {
			int ret = disktroy(*drvs, only_zero, nreps, ask_confirm);
			if (ret == -1) {
				exit(EXIT_FAILURE);
			}
			++drvs;
		}
	}

	return 0;
}

void usage (const char* progname)
{
	printf("Usage: %s <drive 1> [drive 2] ...\n\n", progname);

	printf("Wipe of contents of a drive(s).\n\n");

	printf("Options:\n"
	       "\t-z, -0, --zero\tDon't write random bytes to drive\n"
	       "\t-n, --num-reps\tNumber of times to repeating the process (defaults to 1)\n"
	       "\t-Y, --yes\tDon't ask for confirmation " B_WHITE "(NOT RECOMMENDED!)\n" RESET
	       "\t-h, --help\tDisplay the help \n"
	       "\t-v, --version\tDisplay version information \n\n"
	       "Examples:\n"
	       "\tdisktroy /dev/sdb\n"
	       "\tdisktroy /dev/sdb /dev/sdc\n"
	       "\tdisktroy -z /dev/sdb\n"
	       "\tdisktroy -n 2 /dev/sdb\n\n");

	printf("NOTE: This program requires root privileges to run.\n");
}

void version (const char* progname)
{
printf("%s 0.01\n"
"Copyright (C) 2020 S.M. Raihanul Bashir.\n"
"License: Apache License 2.0 <http://www.apache.org/licenses/LICENSE-2.0>.\n"
"This is opensource software: you are free to redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n\n"

"Written by S.M. Raihanul Bashir.\n", progname);
}
