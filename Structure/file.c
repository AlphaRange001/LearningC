// #include <stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("data.txt", "w");

//     char ch[1000];

//   fprintf(ptr,"%s","helloe i am still waiting for you");
//     fclose(ptr);
// }

// read
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("data.txt", "w");

    fprintf(ptr, "%s", " 13helloe i am still waiting for you");
    fclose(ptr);
    // FILE *ptr;
    ptr = fopen("data.txt", "r");


    char ch[1000];
    fscanf(ptr, "%c", &ch);
    if (fgets(ch, sizeof(ch), ptr) != NULL)
    {
        printf("%s", ch);
    }
    fclose(ptr);
}
