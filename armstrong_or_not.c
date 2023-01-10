#include<stdio.h>
#include<math.h>
int main()
{
    int i,b,a,remainder,count=0,ams=0;
    printf("Enter the number you want to check: ");
    scanf("%d",&i);
    a=i; b=i;
    while(a != 0){
        a=a/10;
        count++;
    }
    while(i!=0){
        remainder=i%10;
        ams = ams + pow(remainder,count);
        i=i/10;
    }
    if(ams==b){
        printf("The number is amstrong number");
    }
    else{
        printf("the number is not amstrong number");
    }
    
    return 0;
}