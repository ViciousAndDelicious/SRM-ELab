#include <stdio.h>
int main() {
  int n, basic, i, gross;
  scanf("%d",&n);
  for (i=0; i<n; i++) {
    gross = 0;
    scanf("%d", &basic);
    if (basic<1500) {
      gross=basic+(basic/10)+((9*basic)/(10));
    }
    else if (basic >= 1500) {
      gross=basic+500+((98*basic)/100);
    }
    printf("\n%d", gross);

  }
	return 0;
}