#include<stdio.h>
int fac(int);
void main()
{
	int n,f;
	printf("Enter Number: ");
	scanf("%d",&n);
	f=fac(n);
	printf("Factorial=%d",f);
}
int fac(int n){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}
