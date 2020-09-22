#include <stdio.h>
struct student
{
  int rollno;
  char name[20];
  int dd;
  char mm[10];
  int fees;
}s[10];
int main()
{
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i].rollno);
    scanf("%s",s[i].name);
    scanf("%d%s",&s[i].dd,s[i].mm);
    scanf("%d",&s[i].fees);
  }
  for(i=0;i<n;i++)
  {
  printf("Roll no:%d\n",s[i].rollno);
  printf("Name:%s\n",s[i].name);
  printf("DOB:%.02d%s\n",s[i].dd,s[i].mm);
  printf("Fees:%d\n",s[i].fees);
  }
return 0;
}