#include <stdio.h>
#define MAX 3
int main() {
  char name[MAX];
  int i;
  float marks[MAX];
  
  for(i=1; i<MAX+1; i++) {
    scanf("%s %f", name, &marks[i]);
    printf("\nRoll number=%d\nName=%s\nMarks=%.2f", i, name, marks[i]);  
  }
  
  return 0;
}