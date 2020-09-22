#include <stdio.h>
int main() {
  char c;
  scanf("%c", &c);
  (isupper(c)) ? printf("Input is upper case\nLower case=%c", tolower(c)) : printf("Input is lower case\nUpper case=%c", toupper(c));
  return 0;
}