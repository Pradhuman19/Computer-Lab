#include<stdio.h>
#include<math.h>
int main() 

{
    
    int a,b,i;
    printf("Enter the two numbers: \n");
    scanf("%d%d",&a,&b);
    if(a>=b)
        {
            for(i=a;i>=1;i--)
            {
            if(a%i==0 && b%i==0)
                {
                printf("The GCD is %d",i);
                break;
                }
             }
        }
    else{
         for(i=b;i>=1;i--)
            {
                 if(a%i==0 && b%i==0)
                 {
                 printf("The GCD is %d",i);
                 break;
                 }
            }
        }
    return 0;
}