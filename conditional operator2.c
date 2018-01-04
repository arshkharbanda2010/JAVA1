#include<stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER THE THREE DIGITS TO FIND THE GREATEST");
	scanf("%d%d%d",&a,&b,&c);
	int d;
	d=(a>b)?(a>c?a:c):(b>c?b:c);
	
	printf("%d IS GREATEST",d);
}
