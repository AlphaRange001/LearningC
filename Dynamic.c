#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
// free(ptr);
    ptr=(int*)realloc(ptr,5);
    for(int i=0;i<3;i++){
        scanf("%d\n",&ptr[i]);
    }
        for(int i=0;i<3;i++){
        printf("%d\n",&ptr[i]);
    }
}