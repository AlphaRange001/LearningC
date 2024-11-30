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

// Q-3

// int swap(int *a, int *b, int *c);
// int main()
// {
//     int a = 3;
//     int b = 4;
//     int c;
//     // c = a;
//     // a = b;
//     // b = c;
//     printf("a=%d\nb=%d\n",a,b);
//     swap(&a, &b, &c);
//     printf("a=%d\nb=%d", a, b);
// }

// int swap(int *a, int *b, int *c)
// {
//     *c = *a;
//     *a = *b;
//     *b = *c;
//     printf("a=%d\nb=%d\n", * a, *b);
// }

// Q-3

// int sum(int *x,int *y);
// int product(int *x,int *y);
// int avg(int *x,int *y);
// int main(){
// int x=3;
// int y=4;
// sum(&x,&y);
// product(&x,&y);
// avg(&x,&y);
// }
// int sum(int *x,int *y){
//     int z=(*x)+(*y);
//     printf("%d\n",z);
// }
// int product(int *x,int *y){
//     int z=(*x)*(*y);
//     printf("%d\n",z);
// }
// int avg(int *x,int *y){
//     float z=((*x)+(*y))/2;
//     printf("%f\n",z);
// }

// Q-4

// int max(int *x,int *y);
// int main(){
// int a=40;
// int b=5;
// max(&a,&b);
// }
// int max(int *x,int *y){
//     if((*x)>(*y)){
//         printf("%d is greater\n",*x);
//     }
//     else{
//         printf("%d is greater\n",*y);
//     }
// }

// Q-5

// #include <stdio.h>



// int main()
// {
//     int arr[] = {5, 3, 2, 8, 6};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i+1; j < 5; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }


