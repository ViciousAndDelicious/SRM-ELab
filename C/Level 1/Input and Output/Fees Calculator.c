#include <stdio.h>

int
main ()
{
  char type;
  int no_p, fee_p, no_b, fee_b, res;
  scanf ("%c", &type);
  scanf ("%d", &no_p);
  scanf ("%d", &fee_p);
  scanf ("%d", &no_b);
  scanf ("%d", &fee_b);

  switch (type)
    {
    case 'A':
      res = (no_p * fee_p) + (no_b * fee_b);
      break;
    case 'B':
      res = ((no_p * fee_p) + (no_b * fee_b) + 5000);
      break;
    case 'C':
      res = ((no_p * fee_p) + (no_b * fee_b) + 1500);
      break;
    case 'D':
      res = ((no_p * fee_p) + (no_b * fee_b) + 1500 + 5000);
      break;
    default:
      printf ("Invalid set char!");
      break;
    }

  printf ("The fee to be paid is Rs=%d", res);
  return 0;
}