#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
  char a[50];
  int c,b,i;
  scanf("%s",a);
  scanf("%d%d",&c,&b);
  for(i=b;i<b+c;i++)
    printf("%c",a[i]);
  
  return 0;
}