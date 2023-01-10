#include<stdio.h>  
 int main()    
{    
int n,i,sum;
printf("Enter the number : ");
scanf("%d",&n);
for(i=0;i<=n;i++){
    sum = sum + i;
}

printf("The sum of first %d numbers is: %d\n",n,sum);

return 0;  
}   
