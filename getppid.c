#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 *getppid prints the PID of the parent process
 *When the program is run several times the PPID doews not change
 *echo $$ prints the same value
 *ps -p $$ prints the PPID and the tty
 */
int main()
{
  pid_t pid;
  pid = getppid();
  printf("%d\n", pid);
  return (0);
}
