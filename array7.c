#include<stdio.h>
void main()
{
	int a[5], i , count=0, n;

	printf("\n Enter array elements: ");
	for(i=0; i<5; i++)
	{
		scanf("\n %d", &a[i]);
	}

	printf("\n Enter a  umber to be searched: ");
	scanf("\n %d" , &n);

	for(i=0; i<5; i++)
	{
		if(a[i] == n)
		{
			printf("\n Element found at index: %d", i);
			break;
		}
		count++;
		if(count == 5)
		{
			printf("\n Element not Found!!!");
		}
	}
}