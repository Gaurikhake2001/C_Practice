#include<stdio.h>
int arm(int);

void main()
{
	int n;
	printf("\n Enter a number");
	scanf("%d",&n); 

	int x = arm(n);

	if(x==n)
		printf("\n Number is Armstrong!!",x);
	else
		printf("\n Number is not Armstrong!!",x);
}


int arm(int n)
{
	int c;
	int r,y;
	c==n;

	while(c>0)
	{
		r=n%10;
		y = (r*r*r)+y;
		n= n/10;

	}
	if (y==n)

		return 1;
	
	else
		 return 0;
	
}