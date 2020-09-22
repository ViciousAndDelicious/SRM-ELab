#include <stdio.h>
int main() {
  int start, end,i;
  scanf("%d\n%d", &start, &end);
  for(i=start; i!=end-1; --i) {
    printf("\n%d", i);
  }
  
	return 0;
}