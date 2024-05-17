#include<stdio.h>
#define length 5
void main()
{
	int x[length];
	int i,j,temp;

	printf("\n Enter elements in an array: ");
	for(i=0; i<length; i++)
	{

		scanf("%d", &x[i]);
	}

	for(i=0; i<length; i++)
	{
		for(j=i+1; j<length; j++)
		{
			if(x[i]>x[j]) // this is for ascending sorting
				//  if(x[i]<x[j]) // this is for ascending sorting
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	printf("\n Sorted array is: ");
	for(i=0; i<length; i++)
	{
		printf("%d \t",x[i]);
	}
}