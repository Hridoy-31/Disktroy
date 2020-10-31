<img src="img/Disktroy.png" alt="Disktroy Logo" width=200 height=200/>

[![GitHub issues](https://img.shields.io/github/issues/Hridoy-31/Disktroy)](https://github.com/Hridoy-31/Disktroy/issues)
[![GitHub forks](https://img.shields.io/github/forks/Hridoy-31/Disktroy)](https://github.com/Hridoy-31/Disktroy/network)
[![GitHub stars](https://img.shields.io/github/stars/Hridoy-31/Disktroy)](https://github.com/Hridoy-31/Disktroy/stargazers)
[![GitHub license](https://img.shields.io/github/license/Hridoy-31/Disktroy)](https://github.com/Hridoy-31/Disktroy/blob/master/LICENSE)
![GitHub language count](https://img.shields.io/github/languages/count/Hridoy-31/Disktroy)
![GitHub top language](https://img.shields.io/github/languages/top/Hridoy-31/Disktroy)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/Hridoy-31/Disktroy)
![GitHub repo size](https://img.shields.io/github/repo-size/Hridoy-31/Disktroy)
![Lines of code](https://img.shields.io/tokei/lines/github/Hridoy-31/Disktroy)
![Repo status](https://img.shields.io/badge/status-building-blue)

# Disktroy

Disktroy is a program to destroy the contents of a particular disk. 
The drive is zeroed out and random bytes for further data destruction are written.


```
Usage: disktroy <drive 1> [drive 2] ...

Remove the contents of a drive(s).

Options:
	-z, -0, --zero	Don't write random bytes
	-n, --num-reps	Number of repeatation (defaults to 1)
	-Y		Don't ask for confirmation (NOT RECOMMENDED)
	-h, --help	Display this help and exit
	-V, --version	Display this version information and exit

Examples:
	disktroy /dev/sdb
	disktroy /dev/sdb /dev/sdc
	disktroy -z /dev/sdb
	disktroy -n 2 /dev/sdb

NOTE: This program requires root privileges to run.
      You can use "sudo" also.
```


## Requirements
1. [GCC](https://gcc.gnu.org/)
2. [GNU Make](https://www.gnu.org/software/make/)
3. [PyQt5](https://pypi.org/project/PyQt5/) (for the GUI front-end) 


## Setup

Disktroy is currently only available for installation and execution on Linux. 
Download and update the source tree to the source directory. 
To build and install Disktroy, run ```make install```.
