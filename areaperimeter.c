#include<stdio.h>
void main()
{
// area and perimeter of square
	float s;

	printf("\nEnter side of square: ");
	scanf("\n %f", &s);

	float A = s*s;
	printf("\n Area of Square is: %f", A);

	float P = s+s;
	printf("\n Perimeter of Square is: %f", P);

	float l , b;

	printf("\n Enter length and breadth of rectangle: ");
	scanf("%f%f", &l,&b);

	float Ar = l*b;
	printf("\n Area of Rectangle is: %f", Ar);

	float Pr = l+b;
	printf("\n Perimeter of Rectangle is: %f", Pr);


}