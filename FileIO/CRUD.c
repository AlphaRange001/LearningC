#include <stdio.h>
// void main()
// {
//     FILE *fptr;
//     fptr = fopen("text.txt", "r");

//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("data is :%c", ch);

//     fclose(fptr);
// }

// #include <stdio.h>
// void main()
// {
//     FILE *fptr;
//     fptr = fopen("text.txt", "w");

//     char ch;
//     fprintf(fptr, "%c", 'M');
//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c", 'N');
//     fprintf(fptr, "%c", 'G');
//     fprintf(fptr, "%c", 'O');

//     fclose(fptr);
// }

// #include <stdio.h>
// void main()
// {
//     FILE *fptr;
//     fptr = fopen("text.txt", "a");

//     char ch;
//     fprintf(fptr, "%c", 'M');
//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c", 'N');
//     fprintf(fptr, "%c", 'G');
//     fprintf(fptr, "%c", 'O');
//     fclose(fptr);
// }

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("odd.txt", "w");
// // fprintf(ptr,"%c",'h');
//     for (int i = 0; i < 10; i++)
//     {
//         if (i % 2 == 0)
//         {
//             // d == i;
//             fprintf(ptr, "%d", i);
//         }
//     }
//     fclose(ptr);
// }