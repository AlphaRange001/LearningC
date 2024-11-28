#include <stdio.h>
int main()
{
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // for (int i = 5; i >=1; i--)
    // {
    //     for (int j = i; j >=1; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 12345
    // 1234
    // 123
    // 12
    // 1

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 1
    // 22
    // 333
    // 4444
    // 55555

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //     printf("%d",i);
    // }
    // printf("\n");
    // }

    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 5 4 3 2 1
    // 5 4 3 2
    // 5 4 3
    // 5 4
    // 5

    // for (int i = 5; i >=1; i--)
    // {
    //     for (int j = 5; j >=6 - i; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 1
    // 2  3
    // 4  5  6
    // 7  8  9  10
    // 11 12 13 14 15

    // int a=0;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++)
    // {
    //     a++;
    //     printf("%d ",a);

    // }
    // printf("\n");
    // }

    // 1
    // 1 1
    // 1 1 2
    // 1 1 2 3

    // undone

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
        int a = 0, b = 1;
        
        int final;
            a = b;
            b = final;
            final = a + b;
            printf("%d ", &final);
        }
        printf("\n");
    }

    //      1
    //     12
    //    123
    //   1234
    //  12345

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 1; k <= 5 - i; k++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }


//  12345
//   1234
//    123
//     12
//      1
}