#include <stdio.h>
#define MAX 100
int main() {
  int n, arr[MAX], search, i, flag=0;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &search);  
  for (i=0; i<n; i++) {
    if(arr[i]==search){
      printf("%d is found in the array at position=%d", search, i);	
      flag = 1;
    }
  }
  if(!flag){
    printf("%d Does not exist in the array", search);
  }
  
  return 0;
}