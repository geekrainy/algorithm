#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  if (n < 4) {
    printf("%.2f\n", n*95.0);
  } else {
    printf("%.2f\n", n*95*0.85);
  }
  return 0;
}