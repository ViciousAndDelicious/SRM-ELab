#include <stdio.h>
int main()
{
  int m,c,y,x,h;
  scanf("%d %d",&m,&c);
  x=-(c/m);
  y=c;
  h=x+y;
  printf("The line equation is y=%dx+%d",m,c);
  printf("\nThe x intercept is %d",x);
  printf("\nThe y intercept is %d",y);
  printf("\nThe house number is %d",h);
  return 0;
}