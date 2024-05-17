#include<stdio.h>
void main()
{
	int a[3][3], b[3][3], c[3][3], i,j,k,sum=0;

	printf("\n Enter first matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\n%d",&a[i][j]);
		}
		printf("\n");
	}

	printf("\n Enter second matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\n%d",&b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum = sum + a[i][k] * b[k][j];
				c[i][j] = sum;
				sum = 0;
			}
		}
	}
	printf("\n Multipication is: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}