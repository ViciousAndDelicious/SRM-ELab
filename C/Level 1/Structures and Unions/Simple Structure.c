#include <stdio.h>
#define MAX 100
int main() {
  char name[MAX], roll[MAX], marks[MAX];
  scanf("%s %s %s", name, roll, marks);
  printf("Name=%s\nRoll number=%s\nMarks=%s", name, roll, marks);
  return 0;
}