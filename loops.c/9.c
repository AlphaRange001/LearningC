#include <stdio.h>
int main()
{
    int a = 0, b = 1, sum ;
   while (sum <= 100)
    {
        printf("%d \n", sum);
        a = b;
        b = sum;
        sum = a + b;

    }
}