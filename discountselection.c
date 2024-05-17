#include<stdio.h>
void main()
{
	char c;
	int cp;

	printf("\nAre you a student(Y/N):  ");
	scanf("\n %c", &c);

	printf("\nEnter cost prize: ");
	scanf("\n %d",&cp);

	// switch(c)
	// {
	// case 'Y':
	// 	if(cp>500)
	// 		printf("\n Discount=10%");
	// 	else
	// 		printf("\n Discount=5%");
	// 	break;

	// case 'N':
	// 	if(cp>500)
	// 		printf("\n Discount=8%");
	// 	else
	// 		printf("\n Discount=2%");
	// 	break;

	if(c=='Y')
	{
		if(cp>500)
			printf("\n Discount=10 %");
		else
			printf("\n Discount=5 %");
	}
	else
	{
		if(cp>500)
			printf("\n Discount=8 %");
		else
			printf("\n Discount=2 %");
	}
	}
