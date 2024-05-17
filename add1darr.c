#include<stdio.h>
void main()
{
	int i,sum=1;
	int a[3];
	// printf("\nEnter size of an array: ");
	// scanf("%d",&n);

	
	printf("\nEnter Elements in an array:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n Elements in an Array is: ");
	for(i=0; i<3;i++)
	{
		printf("%d \t ", a[i]);
	}
	printf("\n");

	
	 for(i=0; i<3; i++)
	 {
	    sum = sum * a[i] ;
	 }
	 printf("\n Sum of array is:%d ", sum);
}