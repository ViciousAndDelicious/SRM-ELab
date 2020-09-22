#include<stdio.h>
#include<math.h>
#include <limits.h>
int main()
{
    int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
	    int num;
	    scanf("%d",&num);
	    int cars[num],j;
	    for(j=0;j<num;j++){
	        scanf("%d",&cars[j]);
	    }
	    int max=cars[0];
	    int count = 1;
	    int k;
	    for(k=1;k<num;k++){
	        if(cars[k] <= max){
	            max= cars[k];
	            count = count + 1;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}