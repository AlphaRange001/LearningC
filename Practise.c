// // #include <stdio.h>
// // int input(int arr[]);
// // int main()
// // {
// //     int arr[];
// //     input(arr[]);
// //     for (int i = 0; i < 5; i++)
// //     {
// //         printf("%d", arr[i]);
// //     }
// // }

// // int input(int arr[])
// // {
// //     for (int i = 0; i < 5; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     int temp = 0;
// //     for (int j = 0; j < 5; j++)
// //     {
// //         if (arr[j] > arr[j + 1])
// //         {
// //             temp = arr[j];
// //             arr[j] = arr[j + 1];
// //             arr[j + 1] = temp;
// //         }
// //     }
// // }

// #include <stdio.h>

// int input(int arr[], int size);

// int main() {
//     int arr[5]; // Specify the size of the array
//     input(arr, 5); // Pass the array name and size
//     // for (int i = 0; i < 5; i++) {
//     //     printf("%d ", arr[i]);
//     // }
//     return 0;
// }

// int input(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     for (int i = 0; i < size; i++) {
//         printf("%d", arr[i]);
//     }
//     printf("\n");

//     int temp = 0;
//     for (int j = 0; j < size-1 ; j++) { // Correct loop condition
//         if (arr[j] > arr[j + 1]) {
//             temp = arr[j];
//             arr[j] = arr[j + 1];
//             arr[j + 1] = temp;
//         }
//     }
//      for (int i = 0; i < size; i++) {
//         printf("%d", arr[i]);
//     }
//     // return 0;
// }


#include<stdio.h>
// int main(){
//     int arr[]={2,3,4,5,6,8};
//     for(int i=0;i<6;i++){
//         int *ptr=&arr[i];
//         printf("%d",*ptr);
//     }
// }


