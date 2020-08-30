#include <stdio.h>
int main() {
  float n[2];
  scanf("%f %f", &n[0], &n[1]); 
  if ((n[1]) < (n[0]/2)) {
    printf("\nOUT");
  }
  else {
    printf("\nIN");
  }
  return 0;
}