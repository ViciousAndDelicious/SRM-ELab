#include<stdio.h>
int main(void) {
	int t, i;
	scanf("%d",&t);
	while(t--)
	{
	    int h,m,count=0;
	    scanf("%d %d",&h,&m);
	    for (i=0;i<=9;i++)
	    {
	        if (i<h&&i<m)
	            count++;
	        if (i!=0&&i<h&&(i*10+i)<m)
	            count++;
	        if (i!=0&&(i*10+i)<h&&i<m)
	            count++;
	        if (i!=0&&(i*10+i)<h&&(i*10+i)<m)
	            count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
