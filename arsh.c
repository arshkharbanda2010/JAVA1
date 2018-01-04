#include<stdio.h>
void main()

{
	int a,b,c,sum,subt,mult,div;
	printf("ENTER A AND B");
	scanf("%d%d",&a,&b);
	
	printf("ENTER C");
	scanf("%d",&c);
	
	if (c==1)
{
	sum=a+b;
	printf("SUM OF A AND B IS %d",sum);
	

}
else if (c==2)	
{
	subt=a-b;
	printf("SUBTRACTION OF A AND B IS %d",subt);
	
}
else if (c==3)
 {
 	mult=a*b;
 	printf("MULTIPLICATION OF A AND B IS %d",mult);

 }
 else if (c==4)
 {
 	div=a/b;
 	printf("DIVISION OF A AND B IS %d",div);
 }
			
}
