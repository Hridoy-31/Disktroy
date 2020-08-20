# perror

The POSIX error function, perror, is used in C and C++ to print 
an error message to stderr, based on the error state stored in errno.
It prints str and an implementation-defined error message corresponding 
to the global variable errno.

Declaration

    void perror(const char* prefix);
    
Semantics

If the parameter prefix is non-NULL, perror will first print prefix followed 
by a colon and a space to standard error. Then, it will print the result of 
strerror to standard error, followed by a newline character. For instance the 
above example may print

    open: Permission denied


