#include<stdio.h>
void main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

    if(c>='a' && c<='z' || c>='A' && c<='Z')
    {

    	printf("\n Character is Alphabet!!");
    }
    else
    {
    	printf("\n Character is not Alphabet!!");
    }
}