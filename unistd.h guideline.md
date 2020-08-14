# unistd.h header file

In the C and C++ programming languages, unistd.h is the name 
of the header file that provides access to the POSIX operating 
system API. It is defined by the POSIX.1 standard, the base 
of the Single Unix Specification, and should therefore be 
available in any POSIX-compliant operating system and compiler. 
For instance, this includes Unix and Unix-like operating systems, 
such as GNU variants, distributions of Linux and BSD, and macOS, 
and compilers such as GCC and LLVM.


On Unix-like systems, the interface defined by unistd.h is typically
made up largely of system call wrapper functions such as fork, pipe 
and I/O primitives (read, write, close, etc.).


Unix compatibility layers such as Cygwin and MinGW also provide their 
own versions of unistd.h. In fact, those systems provide it along with 
the translation libraries that implement its functions in terms of Win32 
functions. E.g. In Cygwin, a header file can be found in /usr/include that
sub-includes a file of the same name in /usr/include/sys. Not everything is 
defined in there but some definitions are done by references to the GNU C 
standard library headers (like stddef.h) which provide the type size_t and 
many more. Thus, unistd.h is only a generically defined adaptive layer that 
might be based upon already existing system and compiler specific definitions.
This has the general advantage of not having a possibly concurrent set of header 
file defined, but one that is built upon the same root which, for this reason, 
will raise much fewer concerns in combined usage cases. 
