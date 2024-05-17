#include<stdio.h>
void palindrome();
void main()
{

	palindrome();
}
void palindrome()
{
	int n,r,c,sum=0;

	printf("\nEnter number: ");
	scanf("%d",&n);

	c=n;

	while(n>0)
	{
		r=n%10;
		sum = r + (sum * 10);
		n = n/10;
	}
	if(c==sum)
		printf("\n Entered number is Palindrome!! ");
	else
		printf("\n Entered number is not Palindrome!! ");

}