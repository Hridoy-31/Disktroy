sys module informs about System-specific parameters and functions

This module provides access to some variables used or maintained by the
interpreter and to functions that interact strongly with the interpreter.
It is always available.

Some most used sys methods are highlighted in the following:

    sys.copyright : Shows the Official copyright of Python
    sys.dllhandle : Shows the handle that maintain python dlls
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
               
             
