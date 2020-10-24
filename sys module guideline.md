sys module informs about System-specific parameters and functions

This module provides access to some variables used or maintained by the
interpreter and to functions that interact strongly with the interpreter.
It is always available.

Some most used sys methods are highlighted in the following:

    sys.copyright : Shows the Official copyright of Python
    sys.dllhandle : Shows the handle that maintain python dlls only for windows
    sys.executable : Shows the executable file with its path
    sys.getrecursionlimit : Gives the default value (if not set later) of
                            recursion limit
    sys.setgetrecursionlimit : Prompt for setting up the new recursion limit
    sys.getcheckinterval : Gives the default value of interval chacking
    sys.getwindowsversion : Shows the version of windows with minor patches
                            and build number
    sys.path : Shows the path where python is installed
    sys.platform : Shows the opertating system
    sys.version : Shows the version of Python interpreter
    sys.api_version : Gives the version of API
    sys.winver : Shows windows minor version 

    sys.argv : The list of command line arguments passed to a Python script.
               argv[0] is the script name (it is operating system dependent
               whether this is a full pathname or not). If the command was executed 
               using the -c command line option to the interpreter, argv[0] is set 
               to the string '-c'. If no script name was passed to the Python 
               interpreter, argv[0] is the empty string.
               
    sys._clear_type_cache : Clear the internal type cache. The type cache is used to 
                            speed up attribute and method lookups. Use the function 
                            only to drop unnecessary references during reference 
                            leak debugging. This function should be used for internal 
                            and specialized purposes only.
                            
    sys.exec_prefix: A string giving the site-specific directory prefix where the platform-dependent
                     Python files are installed; by default, this is also '/usr/local'. This can be 
                     set at build time with the --exec-prefix argument to the configure script. 
                     Specifically, all configuration files (e.g. the pyconfig.h header file) are 
                     installed in the directory exec_prefix/lib/pythonX.Y/config, and shared library 
                     modules are installed in exec_prefix/lib/pythonX.Y/lib-dynload, where X.Y is 
                     the version number of Python, for example 3.2.

                     Note: If a virtual environment is in effect, this value will be changed in site.py
                           to point to the virtual environment. The value for the Python installation will 
                           still be available, via base_exec_prefix.
                            
    sys.dont_write_bytecode : If this is true, Python won’t try to write .pyc files on 
                              the import of source modules. This value is initially set 
                              to True or False depending on the -B command line option 
                              and the PYTHONDONTWRITEBYTECODE environment variable, but 
                              you can set it yourself to control bytecode file generation.
                              
    sys.exit([arg]): Exit from Python. This is implemented by raising the SystemExit exception,
                     so cleanup actions specified by finally clauses of try statements are honored, 
                     and it is possible to intercept the exit attempt at an outer level.

                     The optional argument arg can be an integer giving the exit status (defaulting to zero), or another type of object.
                     If it is an integer, zero is considered “successful termination” and any nonzero value is considered 
                     “abnormal termination” by shells and the like. Most systems require it to be in the range 0–127, and 
                     produce undefined results otherwise. Some systems have a convention for assigning specific meanings 
                     to specific exit codes, but these are generally underdeveloped; Unix programs generally use 2 for 
                     command line syntax errors and 1 for all other kind of errors. If another type of object is passed, 
                     None is equivalent to passing zero, and any other object is printed to stderr and results in an exit 
                     code of 1. In particular, sys.exit("some error message") is a quick way to exit a program when an 
                     error occurs.

                     Since exit() ultimately “only” raises an exception, it will only exit the process when called from the 
                     main thread, and the exception is not intercepted.
                     
    sys.flags: The named tuple flags exposes the status of command line flags. The attributes are read only.
    
               | attribute  | flag          | 
               | -----------| ------------- |
               | debug      | -d            |
               | inspect    | -i            |
               | interactive| -i            | 
               | isolated   | -I            |
               | optimize   | -0 or -00     |
               | dont_write_bytecode | -B  |
               | no_user_site | -s |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               | Content Cell  | Content Cell  |
               



-B



-s

no_site

-S

ignore_environment

-E

verbose

-v

bytes_warning

-b

quiet

-q

hash_randomization

-R

dev_mode

-X dev (Python Development Mode)

utf8_mode

-X utf8


                              
      

               
             
