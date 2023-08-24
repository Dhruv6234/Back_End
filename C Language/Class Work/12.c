 #include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter 2 numbers \n");
	scanf("%d %d",&a,&b);   // & stand for address of operators
	
	char choice;
	
	printf("enter you choice\n");
	scanf(" %c",&choice);    // %c stand for character == char  %c na aagal space karvi jaruri che karan ke nai hoy to program stop nai thay
	
	switch(choice)
	{
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '%':
			printf("%d",a%b);
			break;
		default:
			printf("%d \n",a+b);
			printf("%d \n",a-b);
			printf("%d \n",a/b);
			printf("%d \n",a%b);
			printf("%d \n",a*b);
	}
	
	
	
}