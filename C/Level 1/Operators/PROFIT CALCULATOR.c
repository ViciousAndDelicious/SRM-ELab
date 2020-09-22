#include <stdio.h>
int main() {
  int x, a, b, res;
  scanf("%d\n%d\n%d", &x, &a, &b);
  res = ( (a*x) - (b*x) - 100);
  printf("profit=%d", res);
  return 0;
}