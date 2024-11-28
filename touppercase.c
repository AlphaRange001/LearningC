#include <stdio.h>
#include <string.h>
int main()

{

    char upper[] = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    int a = strlen(upper);
    char lower[26] = "";
    for (int i = 0; i <= 26; i++)
    {
        lower[i] = upper[i] + 32;
    }
    printf("%s", &lower);
    printf("%d", a);
}