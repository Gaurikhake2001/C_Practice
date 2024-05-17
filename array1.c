#include<stdio.h>
void main()
{
	int a[10],i, sum=0, avg;

	printf("\n enter marks: ");

	for(i=0; i<10; i++)
	{

	  scanf("\n%d", &a[i]);
	}

	printf("\n average of marks is: ");

	for(i=0; i<10; i++)
	{
	sum = sum + a[i];
	avg = sum / 10;
	}
	printf("%d",avg);
}