# GeometricSeries
A program using the fork() system call that prints the given geometric series.

The input consists of the starting number, the constant factor, and how many in the series need to be printed. For example, if the input is 2 3 6, then it prints 2 6 18 54 162 486. The input numbers will be provided in the command line. Because the parent and child processes have their own copies of the data it will be necessary for the child to output the sequence. Have the parent invoke the wait () call to wait for the child process to complete before exiting the program. Perform necessary error checking to ensure that the third input in the command line is 2 or higher.

Instructions

1. Download the GeometricSeries repository to your local host from Github.

2. Open the Terminal (Unix OS), or Command Prompt/Line for Windows.

3. Go to source code directory path.

4. Compile the source code with :
    
    gcc -o GeometricSeries fork.c
    
    This will compile the source code and create an executable file on your local host.
    
5. Run the Program by inputting:

    GeometricSeries
