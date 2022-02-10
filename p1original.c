#include<stdio.h>
void input(float *base, float *height)
{
  printf("enter the base of the triangle\n");
  scanf("%f",base);
  printf("enter the height of the triangle\n");
  scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
  *area=0.5*height*base;
}
void output(float base, float height, float area)
{
  printf("the area of the triangle with base %f and height %f is %f",base,height,area);
}
float main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}