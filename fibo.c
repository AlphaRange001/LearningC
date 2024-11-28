#include <stdio.h>
void main()
{
    int a = 0, b = 1, result = 0;
    printf("%d\n", a);
    for (int i = 0; i <= 20; i++)
    {
        a = b;
        b = result;
        result = a + b;
        printf("%d \n", result);
    }
}