/* disktroy.h: This is the main header */

/*	
 *	Copyright (C) 2020 S.M. Raihanul Bashir 
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

#ifndef DISKTROY_H
#define DISKTROY_H

#include <sys/types.h>

int disktroy (const char* drv, int only_zero, int nreps, int ask_confirm);
void clear_drv (int fd_drv, size_t count, size_t bs, off_t seek_loc);
void rand_drv (int fd_drv, size_t count, size_t bs, off_t seek_loc);

#endif
