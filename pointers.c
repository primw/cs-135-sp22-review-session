#include <stdio.h>

int main ()
{
    int number = 21;
    int* value;

    value = &number;
    printf("Value: %d\n", *value);

    number = 12;
    printf("Value: %d\n", *value);

    *value = 135;
    printf("Value: %d\n", *value);

    return 0;
}