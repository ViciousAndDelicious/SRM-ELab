#include <stdio.h>
#define MAX 100
int main() {
  int i, n, arr1[MAX], arr2[MAX], flag = 1;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &arr1[i]);
  }
  for(i=0; i<n; i++) {
    scanf("%d", &arr2[i]);
  }
  
  for(i=0; i<n; i++) {
    if (arr1[i] < arr2[i]) {
      flag = 0;      
    }
  }
  if (!flag) {
    printf("Incompatible");
  }
  
  else {
    printf("Compatible");
  }
  
  return 0;
  
}