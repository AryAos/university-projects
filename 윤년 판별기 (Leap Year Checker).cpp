#include <stdio.h>

void main()
{
	int year;

	printf("input year : ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("Leap Year");
	else
		printf("Normal Year");

}
