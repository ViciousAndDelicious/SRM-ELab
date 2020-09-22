#include <stdio.h>
#define MAX 100
int main() {
  int roll, fee;
  char name[MAX], course[MAX];
  scanf("%d", &roll);
  scanf("%s", name);
  scanf("%s", course);
  scanf("%d", &fee);
  printf("\nRoll no:%d", roll);
  printf("\nName:%s", name);
  printf("\nCourse:%s", course);
  printf("\nFees:%d", fee);
	return 0;
}