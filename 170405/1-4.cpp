#include<stdio.h>
#include<math.h>
int main()
{
  const double pi = acos(-1.0);
  int n;
  scanf("%d", &n);
  double t = n/180*pi;
  printf("%lf %lf\n", sin(t), cos(t));
  return 0;
}