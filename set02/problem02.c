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
  
}

int input_side()
{
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;

}

int check_scalene(int a, int b, int c)
{
   if (a != b && b != c && a != c)
   else
   
}

void output(int a, int b, int c, int isscalene)
{
  printf("The sides of the triangle are: %d, %d, %d\n", a, b, c,isscalene);
}









