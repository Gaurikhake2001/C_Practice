#include<stdio.h>
void main()
{
	float P , r , t;

	printf("\nEnter principle amount: ");
	scanf("%f",&P);

	printf("\nEnter rate of interest: ");
	scanf("%f",&r);

	printf("\nEnter time: ");
	scanf("%f",&t);

	float S;
	S = (P*r*t)/100 ;

	printf("\n Simple interest = %f", S);

	// return 0;

}