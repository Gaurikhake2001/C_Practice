#include<stdio.h>
void main()
{
	int a[5], i,j,temp;

	printf("\n Enter array elements:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	

    printf("\nsmallest element is:%d", a[0]);
    printf("\n Greatest element is:%d",a[4]);
}