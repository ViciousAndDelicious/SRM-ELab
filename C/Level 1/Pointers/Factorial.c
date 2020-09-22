#include <stdio.h>
int main() {
  int n, i, fact=1;
  scanf("%d", &n);
  while(n!=0) {
    fact=fact*n;
    n=n-1;
  }
  printf("%d", fact);
  return 0;
}