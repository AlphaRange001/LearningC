#include <stdio.h>
// int main(){
//     int arr[]={};
//     printf("Enter first value of arr:");
//     scanf("%d",&arr[0]);
// int a=arr[0]+(0.20*arr[0]);
//     printf("%d",a);
// }

// Q-2

// int main()
// {
//     int odd = 0;
//     int arr[4][4] = {{1, 2, 812, 44}, {3, 4, 44, 34}, {1, 2, 3, 4}, {1, 4, 3, 2}};
//     for (int i = 0; i < 4; i++)
//     {
//         for (int k = 0; k < 4; k++)
//         {
//             // printf("%d ", arr[i][k]);
//             if (arr[i][k] % 2 != 0)
//             {
//                 odd++;
//             }
//         }

//         // printf("\n");

//     printf("%d", odd);
//     }
// }

// Q-3

// int main()
// {
//     int arr[] = {4, 313, 5, 6, 1, 56};
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = i + 1; j < 6; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// Q-4

// int main(){
//     int arr[2][10]={{},{}};
//     for(int i=0;i<2;i++){
//         if(i==0){
//             for(int j=1;j<=10;j++){
//                 printf("%d ",2*j);
//             }
//         }
//         else if(i==1){
//               for(int j=1;j<=10;j++){
//                 printf("%d ",3*j);
//             }
//         }
//         printf("\n");
//     }
// }

// Q-5

int main()
{
    int num = 0;
    char a[] = "xxx";
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 'x')
        {
            num++;
        }
    }
    printf("%d", num);
}