#include <stdio.h>
int main()
{
  int a,b[100],i,j,d=0;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
    for(j=0;j<4;j++)
       scanf("%d",&b[j]);
  if(b[0]==0||b[1]==0||b[2]==0||b[3]==0)
    d=d+1;
    else if(b[0]==-b[1]||b[0]==-b[2]||b[0]==-b[3]||b[1]==-b[2]||b[1]==-b[3]||b[2]==-b[3])
      d=d+1;
    else
      d=0;
    if(d>0)
      printf("Yes\n");
    else
      printf("No\n");   
  }
 return 0;
}
