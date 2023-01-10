#include<stdio.h>

int fact(int n);

int main()
{   
    // int a,Nm1;
    // scanf("%d",&a);
    printf("%d",fact(4));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int Nm1 = fact(n-1);
    int N =  Nm1*n;

    return N;
}