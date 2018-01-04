#include<stdio.h>
int add(int a,int b)
{
	int c=a+b;
	return c;
	
}
void main()
{
	int a,b,result;
	printf("ENTER YOUR NUMBER");
	scanf("%d %d",&a,&b);
	printf("%d",add(a,b));
	
}
