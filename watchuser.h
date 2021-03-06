#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>


struct watchuserelement* addWatchuser(char* username);
struct watchuserelement* removeWatchuser(struct watchuserelement* head, char* username);

struct watchuserelement
{
  char* username;
  int loggedOn;
  struct watchuserelement *next;
};