#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 *getpid retrived the current process' ID
 *Everytime the prgram is run, a new process is created
 *The created process gets a different ID
 */
int main()
{
  pid_t pid;
  pid = getpid();
  printf("%d\n", pid);
  return (0);
}
