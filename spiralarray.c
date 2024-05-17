#include<stdio.h>
void main()
{
	int m,n,i,j;
	printf("\n Enter no. rows and columns: ");
	scanf("%d%d", &m,&n);
	int a[m][n];
	

	printf("\n Enter array elements: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("\n %d", &a[i][j]);
		}
		printf("\n");
	}

	printf("\n Matrix is: \n");
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}

int top = 0, bottom = m-1;
	int left = 0, right = n-1;	
printf("\n Spiral Matrix is: \n");		
	while(left<=right && top<=bottom)
	{

for(i=left; i<=right; ++i)
    {
        printf("%d\t", a[top][i]);
	}
	top++;

for(i=top; i<=bottom; ++i)
{
	printf("%d \t", a[i][right]);
}
right--;
if(top <= bottom)
{
	for(i=right; i>=left; --i)
	{
		printf("%d\t",a[bottom][i]);
	}
	bottom--;
}
if(left<=right)
{
	for(i=bottom; i>=top; --i)
	{
		printf("%d\t",a[i][left]);
	}
	left++;
}
}
}

