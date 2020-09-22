#include <stdio.h>
int main() {
  int count, i, t1=0, t2=1, next;
  scanf("%d", &count);
  for (i=0; i<count; i++) {
    printf("\n%d", t1);
    next = t1+t2;
    t1 = t2;
    t2 = next;
  }
  return 0;
}