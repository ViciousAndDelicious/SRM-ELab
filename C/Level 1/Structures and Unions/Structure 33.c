#include <stdio.h>
#define MAX 4
int main() {
  int n[MAX], r1, r2;
  scanf("%d %d %d %d", &n[0], &n[1], &n[2], &n[3]);
  r1 = n[0]/n[1];
  r2 = n[2]/n[3];
  (r1 > r2) ? printf("%d/%d is greater than %d/%d", n[0], n[1], n[2], n[3]) : printf("%d/%d is smaller than %d/%d", n[0], n[1], n[2], n[3]);
  return 0;
}