#include <stdio.h>
int main(void)
{
  int a, b, c;
  int max;

  printf("input 3 int and, output highest \n");
  printf("please input 1:"); scanf("%d", &a);
  printf("please input 2:"); scanf("%d", &b);
  printf("please input 3:"); scanf("%d", &c);

  max = a;
  if (b > max) max = b;
  if (c > max) max = c;
  printf("higest %d !\n", max);
  return 0;
}
