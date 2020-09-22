#include <stdio.h>
int main() {
  int i, t, val, rev;
  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d", &val);
    while(val!=0) {
      printf("%d", val%10);
      val = val/10;
    }
    printf("\n");
  } 
  return 0;
}