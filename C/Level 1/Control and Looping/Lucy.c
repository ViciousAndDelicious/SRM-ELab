#include <stdio.h>
int main() {
  int year, flag;
  scanf("%d", &year);
  if (year%4==0){
    flag = 1;
    if (year%100==0) {
      if (year%400==0) {
        flag = 1;
      }
      else{
        flag = 0;
      }
    }
  }
  else {
    flag = 0;
  }
  
  
  if (flag == 1) {
    printf("%d is a leap year", year);
  }
  else{
    printf("%d is not a leap year", year);
  }
  return 0;
}