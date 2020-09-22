#include <stdio.h>
int isprime(int n)
{
  int i,f=0;
  for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
  }
  return f;
}
int main()
{
  int a,i,max;
  scanf("%d",&a);
  for(i=a;i<100;i++)
  {
    if(isprime(i)==0)
    {max=i;
     break;
    }
  }
  printf("%d",max-a);
 return 0;
}
