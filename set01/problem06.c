/*6. Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

```c
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
```*/

#include<stdio.h>
int input(int *a, int *b, int *c)
{

    printf("enter three numbers:");
    scanf("%d %d %d",a,b,c);
}

void compare(int a, int b, int c, int *largest)
{
  *largest = a;
   if(*largest >=b && *largest >=c)
   {
    *largest =b;
   }  
   else(*largest >=a && *largest >=b)
   {
    *largest =c;
   }

}

void output(int a, int b, int c, int largest)
{
 printf("The largest among %d,%d is %d",a,b,c,largest);
}

int main()
{
  int a,b,c,largest;
  input(&a,&b,&c);
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}
