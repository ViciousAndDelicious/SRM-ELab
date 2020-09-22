#include <stdio.h>
#define MAX 100
int main() {
  int n, arr[MAX], i;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
    (arr[i]>0) ? printf("\n%d=Positive", arr[i]) : (arr[i] < 0) ? printf("\n%d=Negative", arr[i]) : printf("\n%d=Zero", arr[i]);
  }
  return 0;
}