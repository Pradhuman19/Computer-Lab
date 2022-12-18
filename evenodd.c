#include <stdio.h>
#include <math.h>
int main() 
{   
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0){
        if(num==0){
            printf("The given number is 0");
        }
        else{
        printf("The given number is even");
        }
    }
    else{
        printf("The given number is odd");
    }

    return 0;
}