/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);*/


#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}


int input_side() //userdefined func
{
    int side_of_triangle;
    printf("Enter the length of a side: ");
    scanf("%d", &side_of_triangle);
    return side_of_triangle;
}

int check_scalene(int a, int b, int c) // 
{
   int isscalene;
   if (a != b && a != c && b!=c)
   {
      return 1;
   }
   else
   {
        return 0;
   }
      return isscalene;

}


void output(int a, int b, int c, int isscalene)
{
  if(isscalene==1)
  { 
    printf("triangle is a scalene");
  }else{
    printf("triangle is not scalene");
  }

  
}











