#include<stdio.h>
void main()
{
	int a[3][3],i,j;

	printf ("\n Enter matrix elements: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");

	}

	printf("\n Matrix is: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\n Transpose of Matrix is: \n");
	for(i=0; i<3; i++)
	{
		for(j=0;j<3; j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
}