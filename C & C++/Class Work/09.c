#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks \n");
	scanf("%d",&marks);
	
	switch(marks/10)     
	{
		case 10:
		case 9:
			printf("a++ \n");
			break;
		case 8:
			printf("a+ \n");
			break;
		case 7:
			printf("a \n");
			break;
		case 6:
			printf("b+ \n");
			break;
		case 5:
			printf("b \n");
			break;
		case 4:
			printf("c \n");
			break;
		case 3:
			printf("pass class \n");
			break;
		default:
		printf("invalid marks \n");		
	}
	
}
