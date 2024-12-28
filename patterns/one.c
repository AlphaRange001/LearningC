// #include<stdio.h>
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(j<i){
//                 printf(" ");
//             }
//             else if(j>=i){
//                 printf("#");
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int a=4;
//     for(int i=1;i<5;i++){

//         for(int j=1;j<5;j++){
//             if(j<=a){
//             printf("%d",j);
//             }
//             else if(j>a){
//                 printf("_");
//             }
//         }
//         for(int j=4;j>=1;j--){
//                if(j<=a){
//             printf("%d",j);
//             }
//             else if(j>a){
//                 printf("_");
//             }
//         }
//           a--;
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 4)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}