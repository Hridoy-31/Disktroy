# glob guideline

Glob is a general term used to define techniques to match specified patterns according to rules
related to Unix shell. Linux and Unix systems and shells also support glob and also provide 
function glob() in system libraries.

In Python, the glob module is used to retrieve files/pathnames matching a specified pattern. 
The pattern rules of glob follow standard Unix path expansion rules. It is also predicted that 
according to benchmarks it is faster than other methods to match pathnames in directories. 
With glob, we can also use wildcards ("*, ?, [ranges]) apart from exact string search to make 
path retrieval more simple and convenient.

Note: This module comes built-in with Python, so there is no need to install it externally.

For more information: 
  https://www.geeksforgeeks.org/how-to-use-glob-function-to-find-files-recursively-in-python/
