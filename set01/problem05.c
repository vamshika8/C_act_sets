/*5. Write a C program to compare three numbers using **pass by value**

***Function Declarations***

```c
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
*/

#include<stdio.h>
int input()
{
    int n;
    printf("enter three numbers:");
    scanf("%d",&n);
    return n;
}

int compare(int a, int b, int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest among %d,%d ,%d is %d",a,b,c,largest);
}

int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}