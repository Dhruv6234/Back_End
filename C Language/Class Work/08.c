#include<stdio.h>
int main()
{
	char alpha;
	
	printf("Enter a value \n");
	scanf("%c",&alpha);        // %c for to represent the character and %d is for integer value 
	
	
//	printf("you entered %c",alpha);
	
	switch(alpha)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("it is a vowel \n");
			break;
			
			default :
				printf("consonant \n");
	}
	
	
}