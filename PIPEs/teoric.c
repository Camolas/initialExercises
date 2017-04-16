//Pipes e FIFO's 3 Exemplo Pipe entre pai e filho:
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#define MAXLINE 128
int main (void)
{
  int n, fd[2];
  pid_t pid;
  char line[MAXLINE];
  pipe (fd);
  pid = fork ();
  if (pid > 0)
    {
/* pai */
      close (fd[0]);
/* fecha lado receptor do pipe */
      write (fd[1], "hello world \n", 12);
      close (fd[1]);
    }
  else
    {
/* filho */
      close (fd[1]);
/* fecha lado emissor do pipe */
      n = read (fd[0], line, MAXLINE);
      write (STDOUT_FILENO, line, n);
      close (fd[0]);
    }
  return 0;
}
