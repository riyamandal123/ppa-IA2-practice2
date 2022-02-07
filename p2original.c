#include<stdio.h>
int input_side()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  return( a!=b && b!=c && c!=a);
  
}
void output(int a,int b,int c,int result)
{
  if(result==1)
  {
    printf("triangle with sides %d %d %d is scalene\n",a,b,c);
  }
  else
  {
    printf("triangle is not scalene %d %d %d\n",a,b,c);
  }
}
int main()
{
  int a,b,c,s;
  a=input_side();
  b=input_side();
  c=input_side();
  s=check_scalene(a,b,c); 
  output(a,b,c,s);
  return 0;
}
