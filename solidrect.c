#include<stdio.h>

void row(int n){
	for(int i=1;i<=n;i++){
	printf("*");
	}
	printf("\n");
}

void column(int m){
	int n;
	for(int j =1;j<=m-2;j++){
	for(int k=1;k<=n-1;k++){
	
	printf("*");
	}
	printf("\n");
	}
}


int main()
{	int n,m;
	printf("Enter the rows and column : ");
	scanf("%d%d",&n,&m);
	
	row(n);
	column(m);
	row(n);
	
	return 0;
}
