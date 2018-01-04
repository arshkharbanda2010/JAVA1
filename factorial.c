#include<stdio.h>
int main()
{
	int fact=1,no,i;
	
	
	printf("ENTER THE NUMBER");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
{
	fact=fact*i;
	
}


	printf("THE FACTORIAL OF %d IS %d",no,fact);
}
