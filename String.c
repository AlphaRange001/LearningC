#include <stdio.h>
// int main(){
//     char fname[]="vivek";
//     char lname[]="patel";
//     for(int i=0;i<6;i++){
//         printf("%c",fname[i]);
//     }
//     printf(" ");
//     for(int i=0;i<6;i++){
//         printf("%c",lname[i]);
//     }
// }

// int main(){
//     char name[20];
//     scanf("%s",name);
//     printf("YOur name is :%s",name);
// }

// int main()
// {
//     char data[100];
//     // gets(data);
//     fgets(data,100,stdin);
//     puts(data);
// }

// int main(){
//     char *canchange="vivek patel";
//     puts(canchange);
//     canchange="vivek";
//     // gets(canchange);
//     puts(canchange);
// }

// #include<string.h>
// int main()
// {
//     char name[20]="vivek";
//     char sname[20]="xxpooatel";
//        printf("%d",strcmp(name,sname));
// int len = 0;
// for (int i = 0; name[i] != '\0'; i++)
// {
//     len++;
// }
// printf("%d", len);
// }

// #include <string.h>
// int main()
// {
//     char pass[10] = "hello123";
//     char salt[5] = "1223";
//     strcat(pass, salt);
//     puts(pass);
//     // printf("%s", pass);
// }



// #include <string.h>
// int chop(int a, int b, char name[20]);
// int main()
// {
//     char name[20] = "Vivek patel";
//     chop(2, 5, name);
// }
// int chop(int a, int b, char name[20])
// {

//     for (int i = a; i <= b; i++)
//     {
//         printf("%c", name[i]);
//     }
// }



// int main(){
//     char name[20]="vivek patel";
//     int vowel=0;
//     for(int i=0;i<11;i++){
//         if(name[i]=='a' ||name[i]=='e' ||name[i]=='o' ||name[i]=='i' ||name[i]=='u'){
// vowel++;
//         }
//     }
//     printf("%d",vowel);
// }


int main(){
    char name[20]="vivek patel";
    char ch='i';
    for(int i=0;i<20;i++){
        if(ch==name[i]){
            printf("yes it is present");
        }
    }
}
