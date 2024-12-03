// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[100];
//     int age;
//     float grade;
// };
// int main()
// {
//     struct student s1;
//     strcpy(s1.name, "vivek");
//     s1.age = 20;
//     s1.grade = 9.88;
//     printf("%s", s1.name);
//     printf("\n%d", s1.age);
//     printf("\n%f", s1.grade);
// }

// #include <stdio.h>
// #include <string.h>
// typedef struct student
// {
//     char name[20];
//     int age;
//     float grade;

// }s;

// int
// main()
// { s s4;
// s4.age=20;
// printf("%d",s4.age);
//     struct student s1[2];
//     struct student s2;
//     struct student s3;
//     strcpy(s1[0].name, "vivek");
//     strcpy(s1[3].name, "viv2ek");
//     strcpy(s2.name, "vishal");
//     strcpy(s3.name, "anurag");
//     printf("%s=,%s=,%s=", s1[3].name, s2.name, s3.name);
// }

// #include <stdio.h>
// #include <string.h>
// typedef struct adrressPrinter
// {
//     int houseNo;
//     int block;
//     char city[10];
//     char state[20];
// } ap;

// int main()
// {
//     ap a1 = {1, 1, "indore","M.P"};
//     ap a2 = {2, 2, "indore1","M.P"};
//     ap a3 = {3, 3, "indore2","M.P"};
//     ap a4 = {4, 4, "indore3","M.P"};
//     printf("%s", a1.city);
// }



// #include<stdio.h>
// #include<string.h>
// typedef struct BankAccountDetails{
//     char name[20];
//     int aacNo;

// }Bad;

// int main(){
// Bad b1={"vikkuBhai",2354464};
// Bad b2={"vikkuBhai2",235433};
// Bad b3={"vikkuBhai3",23877};
// printf("%s\n",b1.name);
// printf("%s",b2.name);
// printf("\n%d",b2.aacNo);
// }




#include<stdio.h>
#include<string.h>
typedef struct TeacherDteails{
    // char name[20];
    int age;
}TD;
typedef struct StudentrDteails{
    char name[20];
    int age;
}SD;

int main(){
    // TD t1={"Deepika Rai",43};
    // SD s1={"Vivek patel",21};
    // printf("Teacher Name: %s and it's age is :%d",t1.name,t1.age);
    // printf("\nStudent Name: %s and it's age is :%d",s1.name,s1.age);
TD agee[5];
agee[0].age=020;
printf("%d",agee[0].age);


}