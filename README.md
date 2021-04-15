## Concept of The Simple Shell
> This is a project that comtains the concepts
> that guide on how to create a simple shell
> that will operate the same way as the normal shell "sh".

### File Descriptions
0. getpid.c
This file creates a new process and a new process ID is allocated to that process.
1. getppid.c
This file generated the parent process ID which remains unchanged each time the file is run.
2. max_pid.sh
This is a shell script that prints the maximum value a PID can be. The value can only be extended to a theoretical maximum of 32768 for 32 bit systems or 4194304 for 64 bit:```$ echo 32768 > /proc/sys/kernel/pid_max```
