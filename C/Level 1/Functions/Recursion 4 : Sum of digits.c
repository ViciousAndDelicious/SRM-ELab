#include <stdio.h>
int main() {
  int sum=0, n, temp;
  scanf("%d", &n);
  temp = n;
  while(n!=0) {
    sum=sum+(n%10);
    n=n/10;
  }   
  printf("The sum of digits in %d is %d", temp, sum);
	return 0;
}