#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)malloc(3*sizeof(int));
    ptr=(int*)calloc(3,sizeof(int));
    ptr=(int*)realloc(ptr,4);
    free(ptr);
}