#include<stdio.h>

void main()
{
	int a,b,c;
	printf("ENTER A=");
	scanf("%d",&a);
	printf("ENTER B=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("A=%d \nB=%d ",a ,b);
	return 0;
		
}
