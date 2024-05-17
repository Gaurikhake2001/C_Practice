#include<stdio.h>
void main()
{
	int year; 
	int month;

	printf("\n Enter year: ");
	scanf("%d", &year);

	printf("\n Enter month: ");
	scanf("%d", &month);

	if((year%400 == 0) && (year%4 == 0) || (year%100 != 0)) 
	{
		if(month == 2)
		{
			printf("There are 29 days in an month.");
		}
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			printf("There are 31 days in month. ");
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("There are 30 days in month.");
		}
		else
		{
			printf("\n Oops...There are only 12 months present in year!!!");
		}
	}
	else
	{
		if(month == 2)
		{
			printf("There are 28 days in an month.");
		}
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			printf("There are 31 days in month. ");
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("There are 30 days in month.");
		}
		else
		{
			printf("\n Oops...There are only 12 months present in year!!!");
		}
	}

}