/*9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

***Function Declarations***
```c
float input();
float square_root(float n);
void output(float n, float sqrroot);
```*/

#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n , sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n ;
    printf("Enter a number: \n");
    scanf("%f",&n);
    return n;
}
float square_root(float n){
    float x=n/2;
    float epsilon=0.000001;

    while ((x*x-n)>epsilon || (n-x*x)>epsilon)
    {
      x=0.5*(x+n/x);
    }
    return x;
}

void output(float n , float sqrroot)
{
    printf("Square root of %f is %f",n,sqrroot);
}