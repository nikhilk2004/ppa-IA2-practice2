#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter any base number:");
  scanf("%f",base);
  printf("enter any height number:");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
    *area=0.5*base*height;  
}
void output(float base,float height,float area)
{
  printf("area of triangle :%f",area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}