#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
int main() {
  char st[MAX];
  int i;
  scanf("%s", st);
  for (i=0; i<strlen(st); i++) {
    printf("%c", toupper(st[i]));
  }
  return 0;
}