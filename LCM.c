#include <stdio.h>
#include <math.h>
int main() {
    int a,b,i;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    int c = a*b;
    for(i=1;i<=c;i++){
       if(i%a==0 && i%b==0){
        printf("The LCM is: %d",i);
        break;
       } 
    }
    return 0;
}