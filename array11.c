#include<stdio.h>
void main()
{
	int a[3][3], b[3][3], c[3][3],i, j, gauri=1;
	printf("\n Enter first matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\n %d", &a[i][j]);
		}
		printf("\n");
	}

	printf("\n Enter second matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\n %d", &b[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{

	        if(a[i][j] != b[i][j])
	        	gauri = 0;  
	        	break;	
	    }
	 }

	 if(gauri == 1)
	 	printf("\n matrices are equal!!");
	
	else
		printf("\n Matrices are not equa!!");
}