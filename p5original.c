#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  return n;
}
int find_gcd(int a, int b)
{
  int i,small,gcd;
  if ( a > b)
  {
    small = a;
    a=b;
    b=small;
  }
  if( b%a==0)
  {
    return a;
  }
else
{
  for(i=1;i<=a/2;i++)
  {
    if ( a%i == 0 && b%i == 0)
      gcd = i;
  }
  return gcd;
  }
}
void output(int a, int b, int gcd)
{
  printf("The gcd of %d and %d is %d\n", a, b, gcd);
}

int main()
{
  int a,b,gcd;
  a = input();
  b = input();
  gcd = find_gcd(a,b);
  output(a, b, gcd);
  return 0;
}