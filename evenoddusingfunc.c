#include<stdio.h>

// using no returntype with parameter
/*
void find(int);
void main()
{
	int n;

	printf("\n Enter a number: ");
	scanf("\n %d", &n);

	find(n);
}

void find(int n)
{

	if(n%2==0)

		printf("\nEntered number is Even !!");

	else

		printf("\n Entered number is Odd !!");
}
*/



// using with returntype with parameter
/* 
int find(int);
void main()
{
	int n;

	printf("\n Enter a number: ");
	scanf("\n %d", &n);

	int x = find(n);
		if(n%2==0)

		printf("\nEntered number is Even !!");

	    else

		printf("\n Entered number is Odd !!");

}

int find(int x)
{
	return x ;

}
*/


// using no returntype no parameter

/*
void find();
void main()
{
	find();
}

void find()
{

	int n;
	printf("\n Enter a number: ");
	scanf("\n %d", &n);

		if(n%2==0)

		printf("\nEntered number is Even !!");

	    else

		printf("\n Entered number is Odd !!");

}
*/


// using with returntype no parameter

int find();
void main()
{
	int n;
	printf("\n Enter a number: ");
	scanf("\n %d", &n);

	int x = find();
	if(n%2==0)

		printf("\nEntered number is Even !!");

	    else

		printf("\n Entered number is Odd !!");

}
int find()
{
	return 1;
}

