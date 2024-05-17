#include<stdio.h>
int fibonacchi(int);
void main()
{
	int n;
	printf("\n Enter number of elements to be entered in series: ");
	scanf("\n%d", &n);

	for(int i=0; i<n; i++)
	
	printf("\t%d", fibonacchi(i));
}

int fibonacchi(int n)
{

	
		if(n==0)
			return 0;
		else if(n==1)
			return 1;
		else
			return fibonacchi(n-1) + fibonacchi(n-2);
	
}