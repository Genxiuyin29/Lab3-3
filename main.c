#include <stdio.h>
int main(void)
{
 float a, b;
  printf("Enter Number1 : ");
  scanf("%f", &a);
  printf("Enter Number2 : ");
  scanf("%f", &b);
  printf("%0.2f * %0.2f = %0.2f", a, b, a*b);
  return 0;
}
