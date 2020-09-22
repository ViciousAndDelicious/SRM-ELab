#include <stdio.h>
#include <math.h>
int main() {
  int n, sq, cu;
  scanf("%d", &n);
  sq = (int)pow(n, 2);
  cu = (int)pow(n, 3);
  printf("%d\n%d", sq, cu);
  return 0;
}