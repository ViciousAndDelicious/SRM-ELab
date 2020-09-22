#include <stdio.h>
int main() {
  int n, i, carv=0;
  scanf("%d",&n);
  for (i=1; i<=n; i++) {
    if (i<10) {
      carv=carv+1;
    }
    else if (i>=10){
      carv=carv+2;
    }
  }
  printf("%d",carv);

	return 0;
}