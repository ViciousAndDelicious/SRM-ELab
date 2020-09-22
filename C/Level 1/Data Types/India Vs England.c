#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  if (n%2==0) {
    printf("ENGLAND");
  }
  else if (n<0) {
    printf("Sorry");
  }
  else {
    printf("INDIA");
  }
	return 0;
}