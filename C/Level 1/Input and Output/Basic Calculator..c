#include <stdio.h>
int main() {
  int a, b, res;
  char op;
  scanf("%d ", &a);
  scanf("%c", &op);
  scanf("%d", &b);
  
  switch(op){
    case '+': res = a+b;
    break;
    case '-': res = a-b;
    break;
    case '*': res = a*b;
    break;
    case '/': res = a/b;
    break;
    case '%': res = a%b;
    break;
    default: printf("Invalid op");
    break;
  }
  printf("Answer=%d",res);
  
	return 0;
}