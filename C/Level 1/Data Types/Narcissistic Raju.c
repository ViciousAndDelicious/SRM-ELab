#include <stdio.h>
#include <math.h>
int main() {
  int n, sum=0;
  scanf("%d",&n);
  int res = n;
  
  while(n!=0) {
    sum = sum+pow((n%10),3);
    n = n/10;
  }
  if (sum == res) {
    printf("Narcissistic Number");
  }
  else{
    printf("NOT Narcissistic Number");
  }
  return 0;
  
}