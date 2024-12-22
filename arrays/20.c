#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 5, 3, 2};
    for (int i = 0; i < 5; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = 5;
    printf("%d", arr[1]);
}