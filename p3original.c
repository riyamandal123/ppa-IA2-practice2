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
   for(int i=2;i<=n/2;i++)
     {
       if(n%i==0)
       {
         return 1;
       }
     }
  return 0;
}
void output(int n,int result)
{
  if(result==1)
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
  result=is_composite(n,composite);
  output(n,result);
  return 0;
}