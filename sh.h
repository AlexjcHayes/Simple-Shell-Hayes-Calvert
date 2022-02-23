#include "get_path.h"
#include "watchuser.h"

int pid;
int status;
char *which(char *command, struct pathelement *pathlist);
char *where(char *command, struct pathelement *pathlist);
void list(char *dir);
void printenv(char **envp);
void * watchuser(void* param);

#define PROMPTMAX 64
#define MAXARGS   16
#define MAXLINE   128
