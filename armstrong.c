#include <stdio.h>
#include <math.h>
int main()
{
    int a, x, result=0;
    printf("enter number");
    scanf("%d", &a);
    while (a != 0)
    {

        x = a % 10;
        result=result+x*x*x;
        a = a / 10;
printf("%d\n",result);
    }
    if(result==153){
    printf("It's armstrong no.");}
    else{
    printf("no");
    }}