#include<stdio.h>
void main()
{
	int n;

	printf("\nEnter a number to check: ");
	scanf("\n%d", &n);

	if(n<0)
		printf("\n Number is -ve!!");
	else if(n>0)
		printf("\n Number is +ve!!");
	else
		printf("\n Number is neither +ve nor -ve!!");
}