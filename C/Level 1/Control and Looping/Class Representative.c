#include <stdio.h>
int main() {
  float asset[2];
  int arr_, avg;
  scanf("%f\n%f\n%d", &asset[1], &asset[2], &arr_);
  if (asset[1] > 90 && asset[2] >90) {
    if (!arr_) {
      printf("Eligible");
    }
  }
  else{
    printf("Not Eligible");
  }
  return 0;
}