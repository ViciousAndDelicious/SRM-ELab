#include <stdio.h>
#define MAX 100
int main() {
  int i, j, k, t, n, val[MAX], a, res;
  scanf("%d", &t);
  
  for(i=0; i<t; i++) 
  {
    scanf("%d", &n);

    for (j=0; j<n; j++) 
    {
      scanf("%d", &val[j]); 
    }
    
    
    for (j = 0; j < n; ++j) 
    {
      for (k = j + 1; k < n; ++k)
      {
        if (val[j] > val[k]) 
        {
          a =  val[j];
          val[j] = val[k];
          val[k] = a;
        }
      }
    }
    
    res = val[0]+val[1];
    printf("%d", res);
  }
    
 
	return 0;
}