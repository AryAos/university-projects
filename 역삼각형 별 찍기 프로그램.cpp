#include <stdio.h>

void main()
{
	int num;
	int i, j;

	printf("input number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = num; j >= i; j--)
		{
			printf("*");

		}
		printf("\n");
	}

}
