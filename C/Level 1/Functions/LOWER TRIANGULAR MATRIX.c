#include <stdio.h>
#include<math.h>
int main()
{
  int i,j,x,y,flag=0;
  scanf("%d%d",&x,&y);
  int a[x][y];
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<x;i++)
  {
    for(j=i+1;j<y;j++)
    {
      if(a[i][j]!=0)
      {
        flag=1;
      }
    }
  }
  if(flag==0)
    printf("yes");
  else
    printf("no");
    
  return 0;
}