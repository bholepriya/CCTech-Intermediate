****************************  Test Strategy        ************************

1. Head command is UNIX command which we want to implement in c++.
2. Head command returns first 10 lines by default.


*******************   Test cases        *********************

1. if we run Head command without argument it returns new line.

2. If we run Head command with single argument it returns the first 10 lines in the file if file contained more then 10 lines.
   but if file contained less then 10 lines then it will return all the lines present in the file.
   if file is present, if not then it will give an error message :-Head: cannot read:  File_name : No such file or directory.

3. If we run Head command with multiple argument then it will return first 10 lines in both files
   but if files contained less then 10 lines it will return all the lines in the file if file is present in the directory.
   
4. If file is nor present which is passed as argument at the time of running command Head ait will give an error messgage.
   Head: cannot read:  File_name : No such file or directory 