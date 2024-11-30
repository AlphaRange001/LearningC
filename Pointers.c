#include <stdio.h>
// int main(){
//     int a=22;
//     int *ptr=&a;
//     int b=*ptr;
//     printf("%d\n",&a);
//     printf("%u\n",*ptr);
// }

// Q-1
// int main()
// {
//     int x;
//     int *ptr;
//     ptr = &x;
//     *ptr = 0;
//     printf("%d\n", x);
//     printf("%d\n", *ptr);
//     *ptr+=5;
//     printf("%d\n", x);
//     printf("%d\n", *ptr);
//     (*ptr)++;
//     printf("%d\n", x);
//     printf("%d\n", *ptr);
// }

// int main()
// {
//     int a = 1;
//     int *ptr = &a;
//     int **pptr = &ptr;
//     printf("%d\n", a);
//     printf("%d\n", *ptr);
//     printf("%d\n", **pptr);
// }

// Q-2

// int main()
// {
//     int i = 0100;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d", **pptr);
// }

// int square(int *n);
// int main(){
// int num=4;
// square(&num);
// printf("%d",num);
// }
// int square(int *n){
//     *n=(*n)*(*n);
//     printf("%d",*n);
// }

int swap(int *a, int *b, int *c);
int main()
{
    int a = 3;
    int b = 4;
    int c;
    // c = a;
    // a = b;
    // b = c;
    printf("a=%d\nb=%d\n",a,b);
    swap(&a, &b, &c);
    printf("a=%d\nb=%d", a, b);
}

int swap(int *a, int *b, int *c)
{
    *c = *a;
    *a = *b;
    *b = *c;
    printf("a=%d\nb=%d\n", * a, *b);
}