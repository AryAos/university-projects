#include <stdio.h>

void main()
{
	int i;
	int num;
	int sum = 0;


	printf("input number : ");
	scanf_s("%d", &num);

	for (i = 0;i < num;i++)
	{
		sum += i;
		if (num < sum)
		{
			break;
		}

	}
	printf("%d", i - 1);

}
