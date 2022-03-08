#include <stdio.h>
int add1 (int* x, int* y);
int add2(int x, int y);
int max (int x, int y);

int main()
{
    int x = 9, y = 10;

    int result = add1(&x, &y);
    printf("**ADD 1**\n");
    printf("%d\n", result);
    printf("Value of x = %d\n", x);
    printf("Value of y = %d\n\n", y);
    
    result = add2(x, y);
    printf("**ADD 2**\n");
    printf("%d\n", result);
    printf("Value of x = %d\n", x);
    printf("Value of y = %d\n\n", y);
    
    result = max(x, y);
    printf("**MAX**\n");
    printf("%d\n", result);
    printf("Value of x = %d\n", x);
    printf("Value of y = %d\n", y);
}

int add1(int* x, int* y)
{
    *x = 10;
    *y = 11;
    return *x + *y;
}

int add2(int x, int y)
{
    x = 2;
    y = 3;
    return x + y;
}

int max(int x, int y)
{
    int max;

    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
}