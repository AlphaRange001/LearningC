#include <stdio.h>
void main()
{
    int a, n;
    printf("how many no. you want to enter");
    scanf("%d", &n);
    printf("now entre");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
            break;
        }// {
//     char a;
//     // char upper=65;
//     // char lower = 97;

//     // Capital to small
//     // printf("enter char");
//     // scanf("%c", &a);
//     // printf("%c", a + 32);

//     // small to capital
//     printf("enter char");
//     scanf("%c", &a);
//     printf("%c", a - 32);
// }

    }
}