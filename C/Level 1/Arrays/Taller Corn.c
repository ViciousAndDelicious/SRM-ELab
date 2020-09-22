#include <stdio.h>
int main()
{
  int a[50],i,n,l,s;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  l=s=a[0];
  for(i=1;i<n;++i)
  {
    if(a[i]>l)
       l=a[i];
    if(a[i]<s)
       s=a[i];
  }
       printf("%d",l);
       printf("\n%d",s);
 return 0;
}