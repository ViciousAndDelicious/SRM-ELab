#include<stdio.h>
int main()
{
    int a,b,c,d,e,ar[24],i,min;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    ar[0]=a+b-c*d/e;
    ar[1]=a+b-c/d*e;
    ar[2]=a+b*c-d/e;
    ar[3]=a+b*c/d-e;
    ar[4]=a+b/c-d*e;
    ar[5]=a+b/c*d-e;
    ar[6]=a-b+c*d/e;
    ar[7]=a-b+c/d*e;
    ar[8]=a-b*c+d/e;
    ar[9]=a-b*c/d+e;
    ar[10]=a-b/c*d+e;
    ar[11]=a-b/c+d*e;
    ar[12]=a*b+c-d/e;
    ar[13]=a*b+c/d-e;
    ar[14]=a*b-c+d/e;
    ar[15]=a*b-c/d+e;
    ar[16]=a*b/c+d-e;
    ar[17]=a*b/c-d+e;
    ar[18]=a/b+c-d*e;
    ar[19]=a/b+c*d-e;
    ar[20]=a/b-c*d+e;
    ar[21]=a/b-c+d*e;
    ar[22]=a/b*c+d-e;
    ar[23]=a/b*c-d+e;
    min=10000;
    for(i=0;i<24;i++)
    {
        if(ar[i]<min && ar[i]>0)
        	min = ar[i];
    }
    printf("%d\n",min);
    return 0;
}

