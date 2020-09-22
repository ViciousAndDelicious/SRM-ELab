#include <stdio.h>
int main()
{
  char name[50];
  int j=0;
  scanf("%s",name);
  while(name[j]!='\0')
  {
    printf(" %d",name[j]);
    j++;
  }
 return 0;
}
