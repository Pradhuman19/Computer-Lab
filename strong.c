#include<stdio.h>
#include<math.h>


int main()
{
    int n,sum=0,fact=1;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        int a = n%10;
        for(int j=1;j<=a;j++)
        {
            fact = fact*j;
        }
        sum = sum + fact;
        n=n/10;
        fact=1;
    }
    if(sum==a)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }
    
    return 0;
}