#include<stdio.h>
#include<string.h>
typedef struct{
char name[100];
int age;
}student;
int main(){
student sd;
student *ptr=&sd;
printf("entre name");
scanf("%s",&ptr->name);
// printf("%s\n",sd.name);
printf("%s",ptr->name);
}