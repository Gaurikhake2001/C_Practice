#include<stdio.h>
void main()
{

	double m  = 55.6;
	double * ptr;
	ptr = &m;

	printf("\n Value of m = %lf", m);
	printf("\n Address of m = %d", &m);

	int n = 10;
	int * ptr1;
	ptr1 = &n;

	printf("\n Value of n = %d ", n);
	printf("\n Address of n = %d", &n);

	char c = 'A';
	char *ptr2;
	ptr2 = &c;

	printf("\n Value of c = %c ", c);
	printf("\n Address of c = %d", &c);

	




}