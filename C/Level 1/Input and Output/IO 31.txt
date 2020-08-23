#include <stdio.h>
int main() {
  float x, y; 
  int sum;
  scanf("%f", &x);
  scanf("%f", &y);
  int a, b;
  a = (int)x;
  b = (int)y;
  sum = (int)(a+b);
  printf("sum=%d", sum);
	return 0;
}