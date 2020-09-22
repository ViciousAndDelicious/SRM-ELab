#include <stdio.h>
int main() {
  int n, coins, people, i, rem;
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    scanf("%d %d", &coins, &people);
    rem = coins%people;
    printf("\n%d", rem);
  }
  
	return 0;
}