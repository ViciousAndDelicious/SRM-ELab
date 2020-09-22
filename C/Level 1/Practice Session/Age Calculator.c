#include <stdio.h>
int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  printf("I am %d\nYou are %d\nWe are around %.2f", n1, n2, (float)(n1+n2)/2); 
	return 0;
}