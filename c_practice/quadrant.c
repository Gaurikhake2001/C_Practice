#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter coordinates : ");
	scanf("%d%d", &x,&y);

	if(x>0 && y>0)
	{
		printf("\n Point lies in First Quadrant!");
	}
	else if(x<0 && y>0)
	{
		printf("\n Point lies in Second Quadrant!");
	}
	else if(x<0 && y<0)
	{
		printf("\n Point lies in Third Quadrant!");
	}
	else if(x>0 && y<0)
	{
		printf("\n Point lies in Fourth Quadrant!");
	}
	else if(x!=0 && y==0)
	{
		printf("\n Point lies on x-axis!");
	}
	else if(x==0 && y!=0)
	{
		printf("\n Point lies on y-axis!");
	}
	else 
	{
		printf("\n Point lies at origin!");
	}
}