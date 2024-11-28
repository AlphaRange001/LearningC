// Q-1

// #include<stdio.h>
// void hello();
// void goodbye();
// int main(){
// hello();
// goodbye();
// }
// void hello(){
//     printf("Hello ");
// }
// void  goodbye(){
//     printf("Good Bye");
// }

// Q-2

// #include<stdio.h>
// void namaste();
// void bonjour();
// int main(){
// char a;
// printf("Enter your region :");
// scanf(" %c",&a);
// if(a=='f'){
//     bonjour();
// }
// else if(a=='i'){
//     namaste();
// }
// }

// void namaste(){
//     printf("Namaste");
// }

// void bonjour(){
//     printf("Bonjour");
// }

// Q-3

#include <stdio.h>
// int sum(int a,int b);
// int main(){
//     int a,b;
//     printf("Enter 1st no :");
//     scanf("%d",&a);
//     printf("Enter 2st no :");
//     scanf("%d",&b);
//     int z=sum(a,b);
//     printf("the sum is :%d",z);

// }

// int sum(int a,int b){
//     return a+b;
// }

// Q-4

// int table(int a);
// int main()
// {
//     int z;
//     printf("Enter the no:");
//         scanf("%d", &z);
//             table(z);
// }
// int table(int b)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%dx%d=%d\n", b, i, (b * i));
//     }
// }

// q-5

//  #include<math.h>
//  int main(){
//     int a=pow(2,2);
//     printf("%d",a);
//  }

// Q-6

// void square();
// void circle();
// void rectangle();
// int main()
// {
//     square(2);
//     circle(2);
//     rectangle(2, 3);
// }

// void square(int a)
// {
//     int area = a * a;
//     printf("The square area is :%d\n", area);
// }

// void circle(int a)
// {
//     float area = 3.14 * a * a;
//     printf("The circle area is :%f \n", area);
// }

// void rectangle(int a, int b)
// {
//     int area = a * b;
//     printf("The area of rectangle is :%d\n", area);
// }

// Q-7

// int sum(int n);
// int main()
// {
//     printf("%d",sum(4));
// }

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     int sumM1 = sum(n - 1);
//     int sumN = sumM1 + n;
//     // return sumN;
// }

// Q-11

// int fact(int n);
// int main()
// {
//     printf("%d", fact(5));
// }
// int fact(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }

//     int factM1 = fact(n - 1);
//     int factN = factM1 * n;
//     return factN;
// }

// Q-12

// int percentage();
// int main(){
// printf("The percantage you grabbed :%d",percentage());
// }
// int percentage(){
//     float science,maths,sanskrit;
//     printf("Enter your Science marks :");
//     scanf("%f",&science);
//     printf("Enter your Mathematics marks :");
//     scanf("%f",&maths);
//     printf("Enter your Sanskrit marks :");
//     scanf("%f",&sanskrit);
//     float avg=(science+maths+sanskrit)/3;
//     return avg;
// }



// Q-13


// int fibo(int n);
// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         printf("%d\n", fibo(i));
//     }
// }
// int fibo(int n)
// {

//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     int fibon1 = fibo(n - 1);
//     int fibon2 = fibo(n - 2);
//     int fiboM = fibon1 + fibon2;
//     // printf("%d\n",fiboM);
//     return fiboM;
// }


// Q-14


int main(){
    for (float i=0;i<=2;i=i+0.1){
        printf("%f\n",i);
    }
}