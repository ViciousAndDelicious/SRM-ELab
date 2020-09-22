#include <stdio.h>
int main() {
	int i, j;
  char c='A', end;
  scanf("%c", &end);
  for (i=1; i <= (end-'A'+1); ++i)
  {
    for(j=1; j <= i; ++j)
    {
      printf("%c",c);
    }
    ++c;
    printf("\n");
  }
  return 0;
    
}