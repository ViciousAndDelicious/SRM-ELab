#include <stdio.h>
int main() {
	int n,m,a;
    long int i,j;
    scanf("%d%d%d",&n,&m,&a);
    i=n/a;
    j=m/a;
    if(i*a!=n)
    i++;
    if(j*a!=m)
    j++;
    printf("%ld",i*j);
    return 0;  
}