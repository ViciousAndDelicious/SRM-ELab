#include <stdio.h>
int main() {
  int n, rev=0;
  scanf("%d", &n);
  while(n!=0){
    rev = n%10;
    printf("%d",rev);
    n=n/10;
  }
  return 0;
}