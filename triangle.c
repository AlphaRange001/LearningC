#include <stdio.h>

void main()
{
    // int n;
    // printf("enter no.");
    // scanf("%d", &n);
    // for (int i = 10; i >= 0; i--)
    // {
    //     printf("%d*%d=%d \n", n, i, n * i);
    // }
    int a, r, b, result = 0;
    b = a;
    printf("entre the number");
    scanf("%d", &a);
    while (a != 0)
    {
        r = a % 10;
        a=a/10;
        result = result + r * r * r;
    }
    if (b == result)
    {
        printf("yes");
    }
    else
        printf("no");
}