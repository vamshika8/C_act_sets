/*
03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

***Function Declarations***
```c
int input_number();
int is_composite(int n);
void output(int n, int result);
*/

#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    

}


int input_number()
{         
 int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;

}


int is_composite(int n)
{
  
  {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0)
            return 1; 

    }
    return 0; 
}

}


void output(int n, int result)
{
  

}