#include<stdio.h>


// using no returntype no parameter
/*
void voting();
void main()
{
	voting();
}
void voting()
{
	int age;

	printf("Enter age of person: ");
	scanf("%d", &age);

	if(age >= 18)
	
	printf("Person is eligible for voting!");

	else

	printf("Person is not eligible for voting!");
}
*/

// using no returntype with parameter

/*
void voting(int);
void main()
{
	int age;

	printf("Enter age of person: ");
	scanf("%d", &age);

	voting(age);
}
void voting(int age)
{
	if(age >= 18)
	
	printf("Person is eligible for voting!");

	else

	printf("Person is not eligible for voting!");
}
*/

// using with returntype no parameter

/*
int voting();
void main()
{
	int age;

	printf("Enter age of person: ");
	scanf("%d", &age);

	int x = voting(age);
	if(age >= 18)
	
	printf("Person is eligible for voting!");

	else

	printf("Person is not eligible for voting!");
}
int voting()
{
	return 1;
}
*/

// using with returntype with parameter

int voting(int);
void main()
{
	int age;
	printf("Enter age of person: ");
	scanf("%d", &age);

	int x = voting(age);
	if(age >= 18)
	
	printf("Person is eligible for voting!");

	else

	printf("Person is not eligible for voting!");

}
int voting(int x)
{
	return x;
}

