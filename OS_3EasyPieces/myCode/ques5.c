#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  printf("Now i'm (pid:%d), call fork next.\n", (int)getpid());
  int rc = fork();
  if (rc < 0) {
    // fork failed; exit
    fprintf(stderr, "fork failed\n");
    exit(1);
  } else if (rc == 0) {
    // child (new process)
    //    int wc = wait(NULL);
    // printf("hello, I am child (pid:%d)(wc:%d)\n", (int)getpid(), wc);
    printf("hello, I am child (pid:%d)\n", (int)getpid());
    sleep(1);
  } else {
    // parent goes down this path (original process)
    printf("hello, I am parent of %d (my pid:%d)\n", rc, (int)getpid());
  }
  return 0;
}
