#include <stdio.h>
#define MAX 100
int main() {
  int sum=0, size, arr[100], i;
  scanf("%d", &size);
  for(i=0; i<size; i++) {
    scanf("%d", &arr[i]);
    sum = sum+arr[i];
  }
  printf("%d", sum);
  return 0;
}