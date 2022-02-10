#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the length of the side\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if (a==b && a==c)
  {
   isscalene=0;
  }
  else if(a==b && b!=c)
  {
   isscalene=1;
  }
  else if(a!=b && a==c)
  {
    isscalene=2;
  }
  else if(b==c && c!=a)
  {
    isscalene=3;
  }
  else
  {
    isscalene=4;
  }
  return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
  isscalene = check_scalene(a,b,c);
  if(isscalene==4)
  {
    printf("the triangle is scalene\n");
  }
  else
  {
    printf("the triangle is not scalene\n");
  }
}
int main()
{
  int x,y,z,s;
  x=input_side();
  y=input_side();
  z=input_side();
  s=check_scalene(x,y,z);
  output(x,y,z,s);
  return 0;
}