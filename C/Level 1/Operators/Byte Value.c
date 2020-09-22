#include <stdio.h>
int main()
{
  float a;
  int x;
  scanf("%f",&a);
  x=sizeof(a);
  printf("%d %ld",x,sizeof(x)*2);

 return 0;
}
