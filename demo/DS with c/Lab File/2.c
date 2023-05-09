#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, row, col;
	printf("Enter row no.\n");
	scanf("%d", &row);

	printf("Enter column no.\n");
	scanf("%d", &col);
	int arr[row][col];
	int temp[row][col];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("--------------------Original Array----------------------------------\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("--------------------Transpose Array----------------------------------\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			temp[j][i] = arr[i][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			printf("%d", temp[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}