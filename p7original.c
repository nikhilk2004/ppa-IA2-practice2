#include<stdio.h>
tyepdef_triangle triangle
{
  float base;
  folat altitude;
  folat area;
}triangle;
triangle input_triangle()
{
  float n;
  printf("enter base,altitude numbers:");
  scanf("%f%f",&t.base,&t.altitude);
  return n;
}
void find_area(Traingle *area)
{
  *area=0.5*base*altitude;
}
void output(Triangle t)
{
  printf("the area of triangle aith base=%f and altitude=%f is :%f",base,altitude,area);
}
int main()
{
  int n,x
  n=input_triangle();
  find_area(n,&x);
  output(n,x);
  return 0;
}