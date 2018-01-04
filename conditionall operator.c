#include<stdio.h>
void main()
{
	int a,b;
	printf("ENTER THE TWO DIGITS TO FIND THE GREATER");
	scanf("%d%d",&a,&b);
	int c;
	c=(a>b)?a:b;
	
	printf("%d IS GREATER",c);
}
