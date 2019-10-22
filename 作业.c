#include <stdio.h>
#include <math.h>
int main(void)

{
  float rice;
  double power, high = 100, second = 3;
  power = pow(second, 2);
  rice = power * 1 / 2 * 10;

  if (rice >= high)
  {
    printf("rice=%.2f\n", high);
  }
  else
  {
    printf("rice=%.2f\n", rice) ;
  }
  return 0;
}
