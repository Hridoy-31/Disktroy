# memset()

memset() is used to fill a block of memory with a particular value.
The syntax of memset() function is as follows :

    ptr ==> Starting address of memory to be filled
  
    x   ==> Value to be filled
  
    n   ==> Number of bytes to be filled starting
            from ptr to be filled
          
void *memset(void *ptr, int x, size_t n);

Note that ptr is a void pointer, so that we can pass any type of pointer to this function.
