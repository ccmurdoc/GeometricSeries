# GeometricSeries
A program using the fork() system call that prints the given geometric series.

The input consists of the starting number, the constant factor, and how many in the series need to be printed. For example, if the input is 2 3 6, then it prints 2 6 18 54 162 486. The input numbers will be provided in the command line. Because the parent and child processes have their own copies of the data it will be necessary for the child to output the sequence. Have the parent invoke the wait () call to wait for the child process to complete before exiting the program. Perform necessary error checking to ensure that the third input in the command line is 2 or higher.

