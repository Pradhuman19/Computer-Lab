#include<stdio.h>
#include<math.h>

int main()
{
    int n,reverse=0,remainder;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        remainder = n%10;
        reverse=reverse*10 + remainder;
        n=n/10;

    }
    if(reverse==a)
    {
        printf("The number is Palindrom");
    }
    else
    {
        printf("The number is not Palindrom");
    }
    return 0;
}