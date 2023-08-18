#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int daysPassed=0;
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
{
	if (month > 2 && day >= 60)
{
//	day++;
		
		
			
	for (int i = 1; i < month; i++) {
	if (i == 2)
	daysPassed += 28;
	else if (i < 8 && i % 2 == 1)
	daysPassed += 31;
	else if (i < 7)
	daysPassed += 30;
	else if (i % 2 == 0)
	daysPassed += 31;
	else
	daysPassed += 30;
}
	daysPassed += day;





}

	printf("Day of the year: %d\n",daysPassed );
	printf("Remaining days: %d\n", 366 - daysPassed);
}
	else
{
	if (month == 2 && day == 60)
{



	for (int i = 1; i < month; i++) {
	if (i == 2)
	daysPassed += 28;
	else if (i < 8 && i % 2 == 1)
	daysPassed += 31;
	else if (i < 7)
	daysPassed += 30;
	else if (i % 2 == 0)
	daysPassed += 31;
	else
	daysPassed += 30;
}
	daysPassed += day;




	printf("Invalid date: %02d/%02d/%04d\n", month, daysPassed , year);
}
	else
{

	for (int i = 1; i < month; i++) {
	if (i == 2)
	daysPassed += 28;
	else if (i < 8 && i % 2 == 1)
	daysPassed += 31;
	else if (i < 7)
	daysPassed += 30;
	else if (i % 2 == 0)
	daysPassed += 31;
	else
	daysPassed += 30;
}
	daysPassed += day;



	printf("Day of the year: %d\n", daysPassed);
	printf("Remaining days: %d\n", 365 - daysPassed);
}
}
}

