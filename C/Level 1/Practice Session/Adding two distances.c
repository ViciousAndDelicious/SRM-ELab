#include <stdio.h>
#define MAX 100
int main() {
  int i[MAX];
  float f[MAX]; 
  scanf("%d %f\n%d %f", &i[0], &f[0], &i[1], &f[1]);
  printf("Sum of distances=%d feet and %.2f inches",i[0]+i[1], f[0]+f[1]);
	return 0;
}