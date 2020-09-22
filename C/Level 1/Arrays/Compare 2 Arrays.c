#include<stdio.h>
int main(void)
{
    int a[15],b[15],i,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {flag=1;
        break;}
        else flag=0;
    }
    if(flag==0)
    printf("yes");
    else printf("no");
    return 0;
}