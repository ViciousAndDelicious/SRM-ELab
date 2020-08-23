#include <stdio.h>
int main() {
	int _a, _w;
	scanf("%d",&_a);
  	scanf("%d",&_w);
  	if(_a > 18 && _w > 40) {
      printf("Eligible to donate");
    }
  	else {
      printf("Not Eligible to donate");
    }

	return 0;
}