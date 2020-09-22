#include <stdio.h>
#define MAX 100
int main() {
  int n[2];
  scanf("%d %d", &n[0], &n[1]);
  (n[0] > n[1]) ? printf("%d", n[0]) : printf("%d", n[1]);
  return 0;
}