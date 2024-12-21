#include <stdio.h>
int main()
{
    float a;
    float b;
    char sign;

    printf("enter 1 st num");
    scanf("%f", &a);
    printf("enter sign");
    scanf(" %c", &sign);
    printf("enter 2 nd num");
    scanf("%f", &b);

    switch (sign)
    {

    case '*':
        printf("product is %f", a * b);
        break;
    case '+':
        printf("product is %f", a + b);
        break;
    case '-':
        printf("product is %f", a - b);
        break;
    case '/':
        printf("product is %f", a / b);
        break;
    }
}