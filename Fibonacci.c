#include<stdio.h>
int  main()
{
int n,a,b=1,c=1;    
printf("Enter the number : ");
scanf("%d",&n);
printf("1\n");
for(int i=1;i<=n;i++)
{
    
    printf("%d\n",c);
    a=b;   
    b=c;
    c=a+b;

}

return 0;
}





// 1,1,2,3,5,8,13,21