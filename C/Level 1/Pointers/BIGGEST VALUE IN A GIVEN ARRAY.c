#include <stdio.h>
#define MAX 100
int main() {
  int i, j, n, arr[MAX], temp;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++) {
    for (j=i+1; j<n; j++) {
      if (arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("%d", arr[0]);
  return 0;
}