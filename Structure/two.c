// #include <stdio.h>

// int main() {
//     FILE *file;
//     int size = 0;
//     int ch;
//     file = fopen("data.txt", "r");
//       while ((fgetc(file)) != EOF) {
//         size++;
//     }
//     fclose(file);

//     // Display the file size
//     printf("The size of the file is: %d bytes\n", size);

//     return 0;
// }


#include <stdio.h>

// int main() {
//     FILE *sourceFile, *destFile;
//     char ch;

//     sourceFile = fopen("data.txt", "r");

//     destFile = fopen("copy.txt", "w");

//     while ((fgetc(sourceFile)) != EOF) {
//         fputc(ch, destFile);
//     }

//     printf("File copied successfully.\n");

//     // Close both files
//     fclose(sourceFile);
//     fclose(destFile);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     FILE *file;
//     char ch;

//     // Open the source file in read mode
//     file = fopen(__FILE__, "r");
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     // Read and display the file content character by character
//     while ((ch = fgetc(file)) != EOF) {
//         putchar(ch);
//     }

//     // Close the file
//     fclose(file);

//     return 0;
// }


#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    file1 = fopen("filePath1", "r");
   
    file2 = fopen("filePath2", "r");
   
    file3 = fopen("filePath3", "w");
    

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    printf("Files concatenated successfully.\n");

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
