# sys/types.h guideline
 
 Name:
        sys/types.h


Syntax:
        #include <sys/types.h>


Description:
        The <sys/types.h> header shall contain definitions for at 
        least the following types:
        
blkcnt_t
              Used for file block counts.


blksize_t
              Used for block sizes.


clock_t
              Used for system times in clock ticks or CLOCKS_PER_SEC; 
              see <time.h> .


clockid_t
              Used for clock ID type in the clock and timer functions.


Dev_t
			  Used for device IDs.




fsblkcnt_t
              Used for file system block counts.


fsfilcnt_t
              Used for file system file counts.


gid_t  
			  Used for group IDs.


id_t   
			  Used  as  a  general identifier; can be used to contain at
			  least a pid_t, uid_t, or gid_t.


Ino_t
			  Used for file serial numbers.


key_t  
			  Used for XSI interprocess communication.


mode_t 
			  Used for some file attributes.


nlink_t
              Used for link counts.


off_t  
			  Used for file sizes.


pid_t  
			  Used for process IDs and process group IDs.


pthread_attr_t
			  Used to identify a thread attribute object.


pthread_barrier_t
              Used to identify a barrier.


pthread_barrierattr_t
              Used to define a barrier attributes object.


pthread_cond_t
              Used for condition variables.


pthread_condattr_t
              Used to identify a condition attribute object.


pthread_key_t
              Used for thread-specific data keys.


pthread_mutex_t
              Used for mutexes.


pthread_mutexattr_t
              Used to identify a mutex attribute object.


pthread_once_t
              Used for dynamic package initialization.


pthread_rwlock_t
              Used for read-write locks.


pthread_rwlockattr_t
              Used for read-write lock attributes.


pthread_spinlock_t
              Used to identify a spin lock.


pthread_t
              Used to identify a thread.


size_t 
			  Used for sizes of objects.


ssize_t
              Used for a count of bytes or an error indication.


suseconds_t
              Used for time in microseconds.


time_t 
			  Used for time in seconds.


timer_t
              Used for timer ID returned by timer_create().


trace_attr_t
              Used to identify a trace stream attributes object.


trace_event_id_t
              Used to identify a trace event type.


trace_event_set_t
              Used to identify a trace event type set.


trace_id_t
              Used to identify a trace stream.


uid_t  
			  Used for user IDs.
useconds_t
              Used for time in microseconds.


All types shall be specified as arithmetic types of an acceptable
length, with the following exceptions:


			   key_t
               pthread_attr_t
               pthread_barrier_t
               pthread_barrierattr_t
               pthread_cond_t
               pthread_condattr_t
               pthread_key_t
               pthread_mutex_t
               pthread_mutexattr_t
               pthread_once_t
               pthread_rwlock_t
               pthread_rwlockattr_t
               pthread_spinlock_t
               trace_attr_t
               trace_event_id_t
               trace_event_set_t
               trace_id_t


Additionally:


* mode_t shall be an integer type.
* nlink_t, uid_t, gid_t, and id_t shall be integer types.
* blkcnt_t and off_t shall be signed integer types.
* fsblkcnt_t, fsfilcnt_t,   and ino_t shall be defined as unsigned 
  integer types.
* size_t shall be an unsigned integer type.
* blksize_t, pid_t, and ssize_t shall be signed integer types.
* time_t and clock_t shall be integer or real-floating types.




The type ssize_t shall be capable of storing values at least in the 
range [-1, {SSIZE_MAX}]. The type useconds_t shall be an unsigned 
integer type  capable of storing values at least in the 
range [0, 1000000]. The type suseconds_t shall be a signed integer type 
capable of storing values at least in the range [-1, 1000000].


The implementation shall support one or more programming environments in
 which the widths of blksize_t, pid_t, size_t, ssize_t, suseconds_t, and 
 useconds_t are no greater than the width of type long. The names of 
 these programming environments can be obtained using the confstr() 
 function or the getconf utility.


There is no defined comparison or assignment operator for the following 
 types:


			   pthread_attr_t
               pthread_barrier_t
               pthread_barrierattr_t
               pthread_cond_t
               pthread_condattr_t
               pthread_mutex_t
               pthread_mutexattr_t
               pthread_rwlock_t
               pthread_rwlockattr_t
               pthread_spinlock_t
               trace_attr_t




Copyright Segment:


Portions of this text are reprinted and reproduced in electronic form 
 from IEEE Std 1003.1, 2003 Edition, Standard for Information Technology 
 -- Portable Operating System Interface (POSIX), The Open Group Base 
 Specifications Issue 6, Copyright (C) 2001-2003 by the Institute of 
 Electrical and Electronics Engineers, Inc and The Open Group. In the 
 event of any discrepancy between this version and the original IEEE and
 The Open Group Standard, the original IEEE and The Open Group Standard 
 is the referee document. The original Standard can be obtained online 
 at http://www.opengroup.org/unix/online.html
