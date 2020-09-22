#include <stdio.h>
#include <string.h>
int main()
{
  int i,j,num;
  char str[50][50],temp[25];
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    scanf("%s",str[i]);
  }
  for(i=0;i<num;i++)
  {
    for(j=i+1;j<num;j++)
    {
      if(strcmp(str[i],str[j])>0)
         {
           strcpy(temp,str[i]);
           strcpy(str[i],str[j]);
           strcpy(str[j],temp);
         }
      }
  }
         for(i=0;i<num;i++)
         {
         printf("\n%s",str[i]);
         }
 return 0;
}