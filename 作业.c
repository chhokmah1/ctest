#include <stdio.h>
int main()
{
  int a, b, c, d, sum;
  double average;
  printf("enter number");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  sum = a + b + c + d;
  average = sum / 4;
  printf("sum=%d\naverage=%.1f", sum, average);

  return 0;
}

//n个数求和//

// #include <stdio.h>
// int main()
// {
//   int n, sum = 0, number, i;
//   double average;
//   printf("enter n=");
//   scanf("%d", &n);
//   i = n;
//   for (; n > 0; n--)
//   {
//     printf("enter number=");
//     scanf("%d", &number);
//     sum += number;
//   }
//   average = sum / i;
//   printf("sum =%d\naverage=%.1f\n", sum, average);
//   return 0;
// }
