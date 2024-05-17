// Right triangle star pattern

#include<stdio.h>
void main()
{
	int n, i, j;

	printf("Enter number of rows: ");
	scanf("%d", &n);

	for(i=1; i<=n;b i++)
	{
         	for(j=1; j<=i; j++)
         	{
         		printf("*");
         	}
         	printf("\n");
	}
}