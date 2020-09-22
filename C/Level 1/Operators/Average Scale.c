#include <stdio.h>
int main() 
{
  int i, s[5], s_4=0;
  float target, res;
  scanf("%d %d %d %d %d %f",&s[0], &s[1], &s[2], &s[3], &s[4], &target);
  for (i=0; i<5; i++) {
    s_4=s_4+s[i];
  }
  res = ((target*6.0)-((float)(s_4)));
  printf("sale=%.2f",res);
  	
  return 0;
}