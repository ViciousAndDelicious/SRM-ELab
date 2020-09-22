#include <stdio.h>
int main() {
  int arr[2], sum;
  scanf("%d\n%d", &arr[0], &arr[1]);
  sum = arr[0]+arr[1];
  printf("The sum of the entered numbers is=%d", sum);
  return 0;
}