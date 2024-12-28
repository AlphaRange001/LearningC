// #include <stdio.h>
// int main()

// {int a;
//     int num[] = {1, 8, 3, 7, 4, 7};
//     for (int i = 0; i < 5; ++i){
//       for (int j = i + 1; j < 5; ++j){
//          if (num[i] > num[j]){
//             a = num[i];
//             num[i] = num[j];
//             num[j] = a;
//          }
//       }
//    }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", num[i]);
//     }
// }

// #include <stdio.h>

// #define MAX 10 // Maximum number of elements in the array

// int main() {
//     int data[MAX] = {1, 2, 2, 4, 5, 5, 5, 7, 8, 8}; // Example data
//     int frequency[10] = {0}; // Array to store frequency of each value from 0 to 9
//     int i, j;

//     // Calculate frequency of each value in the data array
//     for (i = 0; i < MAX; i++) {
//         if (data[i] >= 0 && data[i] < 10) {
//             frequency[data[i]]++;
//         }
//     }

//     // Print the histogram
//     printf("Histogram:\n");
//     for (i = 0; i < 10; i++) {
//         if (frequency[i] > 0) {
//             printf("%d: ", i);
//             for (j = 0; j < frequency[i]; j++) {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }
//Right half pyramid pattern of stars using C
#include <stdio.h>
#include <string.h>

void rotateAndPrint(char str[]);

int main() {
    char str[] = "1234";
    
    rotateAndPrint(str);

    return 0;
}

void rotateAndPrint(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        // Print the rotated string
        for (int j = 0; j < len; j++) {
            printf("%c", str[(i + j) % len]);
        }
        printf("\n"); // Move to the next line
    }
}
