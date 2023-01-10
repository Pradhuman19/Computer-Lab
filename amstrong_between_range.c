#include<stdio.h>
#include<math.h>
int main()
{
    int p,q,i;
    printf("Enter the number range: \n");
    scanf("%d%d",&p,&q);
    for(i=p;i<=q;i++)
    {
    int b,a,remainder,count=0,ams=0;
    a=i; b=i;
    while(a != 0){
        a=a/10;
        count++;
    }
    while(b!=0){
        remainder=b%10;
        ams = ams + pow(remainder,count);
        b=b/10;
    }
    if(ams==i){
        printf("%d \n",i);
    }
    a=i;b=i;
    }

    return 0;
}