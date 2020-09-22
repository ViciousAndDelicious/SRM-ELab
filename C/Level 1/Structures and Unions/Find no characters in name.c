#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
  char c[100];
  scanf("%s", c);
  printf("%ld", strlen(c));
  return 0;
}