#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=2;i<=n/2;i++)
  {
    printf("enter the inputs\n");
    scanf("%d",&a[i]);
  }
}

int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=2;i<=n/2;i++)
  {
  if(n%i==0)
  {
    return 1; 
  }

  sum+=a[i];
  }
  return sum;
}
void output(int sum)
{
  printf("sum of two composite numbers  is %d\n",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}





