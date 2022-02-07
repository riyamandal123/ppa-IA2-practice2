#include<stdio.h>
void input(float *base,float *height)
{
  
  printf("enter the base and height of a triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=((base)* (height))*0.5;
}
void output(float base,float height,float area)
{
  printf("area of a triangle is %f\n",area);
}
int main()
{
  float b,h,area;
  input(&b,&h);
  find_area(b,h,&area);
  output(b,h,area);
  return 0;

}