#include <stdio.h>
void main()

{
	int age;
	printf("\n ENTER YOUR AGE");
	scanf("%d",&age);
	
	if (age>=18)
	{
		printf("ELIGIBLE TO VOTE");
	}
	else
	{
		printf("NOT ELIGIBLE TO VOTE");	
	}
}

