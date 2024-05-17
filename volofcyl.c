#include<stdio.h>
const float pi = 3.14;

// using no returntype no parameter
/*
void volume();
void main()
{
	volume();
}

void volume()
{
	float r,h;

	printf("\nEnter radius: ");
	scanf("%f",&r);

	printf("\n Enter height: ");
	scanf("%f",&h);

	

	 printf("\n Volume of Cylinder is: %f", (pi * r * r * h));
}
*/

// using no returntype with parameter

/*
void volume(float,float);
void main()
{
	float r,h;

	printf("\nEnter radius: ");
	scanf("%f",&r);

	printf("\n Enter height: ");
	scanf("%f",&h);
	volume(r,h);
}

void volume(float r, float h)
{
	printf("\n Volume of Cylinder is: %f", (pi * r * r * h));
}
*/

// using with returntype no parameter

/*
float volume();
void main()
{
	float r,h;

	printf("\nEnter radius: ");
	scanf("%f",&r);

	printf("\n Enter height: ");
	scanf("%f",&h);
	volume(r,h);

	float v = volume();
	printf("\n Volume of Cylinder is: %f", (pi * r * r * h));
}

float volume()
{
	return 1;
}
*/

// using with returntype with parameter

float volume(float,float,float);
void main()
{
	float r, h,vol;
	printf("\nEnter radius: ");
	scanf("%f",&r);

	printf("\n Enter height: ");
	scanf("%f",&h);
	

	float v = volume(r,h,vol);
	printf("\n Volume of Cylinder is: %f", (pi * r * r * h));

}
float volume(float r,float h,float vol)
{
	return 1;
}


