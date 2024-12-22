// #include <stdio.h>
// int main()
// {
//     for (int i = 2; i < 6; i++)
//     {
//         if (7% i == 0)
//         {
//             printf("not prime no.");
//             return 0;
//         }
//     }
//     printf(" prime no.");
// }

// #include <stdio.h>

// int main() {int a = 5; // 0101 in binary 
// int b = 3; // 0011 in binary
//  int result = a | b;
//  printf("%d",result);
// }


#include <stdio.h>

// Function to delete an element from a specific position
void deleteFromPosition(int arr[], int *size, int position) {
    if (position >= *size || position < 0) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (*size)--;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10; // Initial size of the array
    int position;

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Prompt user for the position to delete
    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    // Delete element from the specified position
    deleteFromPosition(arr, &size, position);

    // Print modified array
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
