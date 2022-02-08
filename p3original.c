#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a composite number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 1;
  }
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("the number is composite %d\n",n);
  }
  else
  {
    printf("the number is not composite %d\n",n);
  }
}
int main()
{
  int n,c;
  n=input_number();
  is_composite(n);
  output(n,c);
  return 0;
}