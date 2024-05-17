/*
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
*/

#include<stdio.h>
void main()
{
	int i,j;
	char c = 'A' ;

	for( i=0; i<=6; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%c \t",(c+j));
			// c++;
		}
		printf("\n");
	}
}