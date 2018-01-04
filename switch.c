#include<stdio.h>
void main()

{
int ch;

printf("ENTER YOUR NUMBER \n\t 1:SUNDAY \n\t 2:MONDAY \n\t 3:TUESDAY: \n\t 4:WEDNESDAY \n\t 5:THURSDAY \n\t 6:FRIDAY \n\t 6:SATURDAY");
scanf("%d",&ch);

switch(ch)
{
	case 1: 
	printf("SUNDAY");
	break;
	
	case 2:
		printf("MONDAY");
		break;
		
		case 3:
			printf("TUESDAY");
			break;
			
			case 4:
				printf("WEDNESDAY");
				break;
				
				case 5:
				printf("THURSDAY");
				break;
				
				case 6:
				printf("FRIDAY");
				break;
				
				case 7:
					printf("SATURDAY");
					break;
					
					default:
					printf("ENTER ANOTHER NUMBER");
					break;
					
			
	
}

	
	
}

