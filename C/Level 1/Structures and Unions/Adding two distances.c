#include <stdio.h>
#define MAX 100
int main() {
  int arr1[2], i, ft, in;
  float arr2[2];
  scanf("%d %f\n%d %f", &arr1[0], &arr2[0], &arr1[1], &arr2[1]);
  printf("Sum of distances=%d feet and %.2f inches", arr1[0]+arr1[1], arr2[0]+arr2[1]);
  return 0;
}