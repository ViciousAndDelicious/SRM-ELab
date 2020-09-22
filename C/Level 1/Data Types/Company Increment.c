#include <stdio.h>
int main() {
  float rat;
  int rating, raise;
  scanf("%f",&rat);
  rating = (int)(rat*10);
  if (rating<=3) {
    printf("Unacceptable\n0");
  }
  else if(rating == 4) {
    raise = 500*rating;
    printf("Acceptable\n%d", raise);
  }
  else if(rating >= 6) {
    raise = 500*rating;
    printf("Meritorious\n%d", raise);
    }
  else{
    printf("Invalid Input!");
  }
  
    
  return 0;
}