#include <stdio.h>

int main()
{
        int a,b,i,sum;
        printf("Enter the numbers : ");
        scanf("%d%d",&a,&b);
    
    sum = 0;
    
    for (int i = a; i <= b; i++)
        sum = sum + i;
    
    printf("the sum is : %d",sum);
    
    return 0;
}