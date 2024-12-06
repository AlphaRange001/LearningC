#include<stdio.h>
#include<string.h>
typedef union data{
int age;
float grade;
}aa;
int main(){
    union data d1;
    d1.age=56;
    // d1.grade=3.88;
    printf("%d",d1.age);
}
