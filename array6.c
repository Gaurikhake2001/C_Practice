#include<stdio.h>
void main()
{
	int a[3][3], i, j, sum=0;

	printf("\n Enter elements in matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\n%d", &a[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}

	}
	printf("\n Sum of diagonal elements is : %d\n", sum);
}