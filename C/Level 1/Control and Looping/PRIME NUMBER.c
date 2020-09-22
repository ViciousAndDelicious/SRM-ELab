#include <stdio.h>
int main() {
  int p, i, flag = 0;
  scanf("%d", &p);
  
  if(p==2) {
    printf("%d is a prime number", p);
  }
  
  else if(p>2) {
  
    for(i=2; i<(p/2); i++) {
      if(p%i == 0){
        flag = 1;        
      }
    }
    if (flag) {
      printf("%d is not a prime number", p);
    }
    else {
      printf("%d is a prime number", p);
    }
  }
  	
	return 0;
}