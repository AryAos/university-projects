#include <stdio.h>
#include <stdlib.h> // 난수 사용을 위한 헤더파일


void main()
{
	int a[4][4];
	int b[4][4];
	int i, j;

	// 첫번째 배열
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//난수 생성 
			a[i][j] = (rand() % 10) + 1;
			b[i][j] = (rand() % 10) + 1;

		}

	}
	for (i = 0; i < 4; i++) // 세로줄
	{
		for (j = 0; j < 4; j++) //가로줄
		{
			printf("%d ", a[i][j]); // a배열 출력
		}

		printf("	");

		for (j = 0; j < 4; j++)
		{
			printf("%d ", b[i][j]); // b배열 출력
		}

		printf("	");

		for (j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j] + b[i][j]); // a배열과 b배열의 합 출력
		}

		printf("\n");

	}



}