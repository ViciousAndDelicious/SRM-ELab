#include <stdio.h>
#include <string.h>
int main()
{
  int a[100],i,l;
  char s1[100];
  scanf("%s",s1);
  l=strlen(s1);
  for(i=0;i<l;i++)
  {
    a[i]=s1[i];
    a[i]=a[i]-1;
    s1[i]=a[i];
  }
  printf("%s",s1);

 return 0;
}
