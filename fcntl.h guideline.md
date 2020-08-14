# fcntl.h guideline

NAME

    fcntl.h - file control options

SYNOPSIS

    #include <fcntl.h>

DESCRIPTION

    The <fcntl.h> header shall define the following requests 
    and arguments for use by the functions fcntl() and open().

    Values for cmd used by fcntl() (the following values are unique) 
    are as follows:

    F_DUPFD
        Duplicate file descriptor.
    F_GETFD
        Get file descriptor flags.
    F_SETFD
        Set file descriptor flags.
    F_GETFL
        Get file status flags and file access modes.
    F_SETFL
        Set file status flags.
    F_GETLK
        Get record locking information.
    F_SETLK
        Set record locking information.
    F_SETLKW
        Set record locking information; wait if blocked.
    F_GETOWN
        Get process or process group ID to receive SIGURG signals.
    F_SETOWN
        Set process or process group ID to receive SIGURG signals.

    File descriptor flags used for fcntl() are as follows:

    FD_CLOEXEC
        Close the file descriptor upon execution of an exec family 
        function.

    Values for l_type used for record locking with fcntl() 
    (the following values are unique) are as follows:

    F_RDLCK
        Shared or read lock.
    F_UNLCK
        Unlock.
    F_WRLCK
        Exclusive or write lock.

    [XSI] [Option Start] The values used for l_whence, SEEK_SET, 
    SEEK_CUR, and SEEK_END shall be defined as described in 
    <unistd.h>. [Option End]

    The following values are file creation flags and are used 
    in the oflag value to open(). They shall be bitwise-distinct.

    O_CREAT
        Create file if it does not exist.
    O_EXCL
        Exclusive use flag.
    O_NOCTTY
        Do not assign controlling terminal.
    O_TRUNC
        Truncate flag.

    File status flags used for open() and fcntl() are as follows:

    O_APPEND
        Set append mode.
    O_DSYNC
        [SIO] [Option Start] Write according to synchronized I/O 
        data integrity completion. [Option End]
    O_NONBLOCK
        Non-blocking mode.
    O_RSYNC
        [SIO] [Option Start] Synchronized read I/O operations. 
        [Option End]
    O_SYNC
        Write according to synchronized I/O file integrity 
        completion.

    Mask for use with file access modes is as follows:

    O_ACCMODE
        Mask for file access modes.

    File access modes used for open() and fcntl() are as follows:

    O_RDONLY
        Open for reading only.
    O_RDWR
        Open for reading and writing.
    O_WRONLY
        Open for writing only.

    [XSI] [Option Start] The symbolic names for file modes for use 
    as values of mode_t shall be defined as described 
    in <sys/stat.h>. [Option End]

    [ADV] [Option Start] Values for advice used by posix_fadvise() 
    are as follows:

    POSIX_FADV_NORMAL
        The application has no advice to give on its behavior with 
        respect to the specified data. It is the default 
        characteristic if no advice is given for an open file.
    POSIX_FADV_SEQUENTIAL
        The application expects to access the specified data 
        sequentially from lower offsets to higher offsets.
    POSIX_FADV_RANDOM
        The application expects to access the specified data in a 
        random order.
    POSIX_FADV_WILLNEED
        The application expects to access the specified data in the
        near future.
    POSIX_FADV_DONTNEED
        The application expects that it will not access the 
        specified data in the near future.
    POSIX_FADV_NOREUSE
        The application expects to access the specified data 
        once and then not reuse it thereafter.

    [Option End]

    The structure flock describes a file lock. It shall 
    include the following members:

    short  l_type   Type of lock; F_RDLCK, F_WRLCK, F_UNLCK. 
    short  l_whence Flag for starting offset. 
    off_t  l_start  Relative offset in bytes. 
    off_t  l_len    Size; if 0 then until EOF. 
    pid_t  l_pid    Process ID of the process holding the lock; 
    returned with F_GETLK. 

    The mode_t, off_t, and pid_t types shall be defined as 
    described in <sys/types.h>.

    The following shall be declared as functions and may also be 
    defined as macros. Function prototypes shall be provided.

    int  creat(const char *, mode_t);
    int  fcntl(int, int, ...);
    int  open(const char *, int, ...);
    [ADV][Option Start]
    int  posix_fadvise(int, off_t, off_t, int);
    int  posix_fallocate(int, off_t, off_t);
    [Option End]

    [XSI] [Option Start] Inclusion of the <fcntl.h> header may also 
    make visible all symbols from <sys/stat.h> and <unistd.h>.
    [Option End]
