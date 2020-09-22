#include <stdio.h>
int main() {
	long int t,n,m,i,j,k,l,temp1,temp2;
    long int a[10000],b[10000],c[10000],ch[10000],as[10000];
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            b[j]=j+1;
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[j]==a[i])
                {
                    b[j]=0;
                }
            }
        }
        i=0;
        for(j=0;j<n;j++)
        {
            if(b[j]!=0)
            {
                c[i]=b[j];
                i++;
            }
        }
        k=i;
        j=0;
        l=0;
        for(i=0;i<k;i++)
        {
           if(i%2==0)
           {
               ch[j]=c[i];
               j++;
           }
           else
           {
              as[l]=c[i];
              l++;
           }
        }
        temp1=j;
        temp2=l;
        printf("\n");
        for(i=0;i<temp1;i++)
        {
            printf("%ld ",ch[i]);
        }
        printf("\n");
        for(j=0;j<temp2;j++)
            {
             printf("%ld ",as[j]);   
            }
        
    }
	return 0;
}

