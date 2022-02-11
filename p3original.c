#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a composite number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n,int composite)
{
   composite=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      composite +=1;
    }
  }
  return composite;
}
void output(int n,int result)
{
  if(result>2)
  {
    printf("the number %d is composite\n",n);
  }
  else
  {
    printf("the number %d is not composite \n",n);
  }
}
int main()
{
  int n,composite,result;
  n=input_number();
  is_composite(n,composite);
  output(n,result);
  return 0;
}