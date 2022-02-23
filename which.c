#include "get_path.h"

char * which(char *command, struct pathelement *p)
{
  char cmd[64], *ch;
  int  found;

  found = 0;
  while (p) {       
    sprintf(cmd, "%s/%s", p->element, command);
    // printf("--- %s\n",p->element);
    if (access(cmd, X_OK) == 0) {
      found = 1;
      break;
    }
    p = p->next;
  }
  if (found) {
    ch = malloc(strlen(cmd)+1);
    strcpy(ch, cmd);
    return ch;
  }
  else {
      printf("%s: Command not found\n",command);
      fflush(stdout);
      return (char *) NULL;
  }
}

