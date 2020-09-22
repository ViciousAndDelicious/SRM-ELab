#include<stdio.h>
#include<stdint.h>
int main(){
  int t,i;
  scanf("%d",&t);
  while (t--) {
    long int n;
    scanf("%ld",&n);
    int32_t a[n];
    int32_t c;
    long int count=0;
    for (i = 0; i < n; i++)
      scanf("%d",&a[i]);
    c = a[0];
    for (i = 0; i < n; i++) {
      if (a[i] <= c) {
        c = a[i];
        count++;
      }
    }
    printf("%ld\n",count);
  }
  return 0;
}