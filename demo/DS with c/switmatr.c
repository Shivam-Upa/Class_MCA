#include <stdio.h>
void mul();
void sub();
void add();
void main()
{
	int ch;
	do
	{
		printf("\nEnter 1 for metrix multiplicatio");
		printf("\nEnter 2 for metrix subtraction");
		printf("\nEnter 3 for metrix addtion");
		printf("\nEnter 4 for exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			mul();
			break;
		case 2:
			sub();
			break;
		case 3:
			add();
			break;
		default:
			printf("\n wrong choice");
		}
	} while (ch <= 3);
}

void mul()
{
	int a, b, c, i, j, k;
	printf("Enter row no.");
	scanf("%d", &a);

	printf("Enter column no.");
	scanf("%d", &b);
	int arr[a][b];
	int crr[a][b];

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("enter the element for[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nenter the second matrix\n");
	printf("Enter row no.");
	scanf("%d", &a);

	printf("Enter column no.");
	scanf("%d", &b);
	int brr[a][b];

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("enter the element for[%d][%d]=", i, j);
			scanf("%d", &brr[i][j]);
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", brr[i][j]);
		}
		printf("\n");
	}
	printf("MATRIX mul  \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			crr[i][k] = 0;
			for (k = 0; k < b; k++)
			{
				crr[i][j] += arr[i][k] * brr[k][j];
			}
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", crr[i][j]);
		}
		printf("\n");
	}
}
void sub()
{
	int a, b, c, i, j, k;

	printf("Enter row no.");
	scanf("%d", &a);

	printf("Enter column no.");
	scanf("%d", &b);
	int arr[a][b];
	int crr[a][b];

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("enter the element for[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nenter the second matrix\n");
	printf("Enter row no.");
	scanf("%d", &a);

	printf("Enter column no.");
	scanf("%d", &b);
	int brr[a][b];

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("enter the element for[%d][%d]=", i, j);
			scanf("%d", &brr[i][j]);
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", brr[i][j]);
		}
		printf("\n");
	}
	printf("MATRIX sub  \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			crr[i][j] = arr[i][j] - brr[i][j];
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", crr[i][j]);
		}
		printf("\n");
	}
}

void add()
{
	int a, b, c, i, j, k;
	printf("Enter row no.");
	scanf("%d", &a);

	printf("Enter column no.");
	scanf("%d", &b);
	int arr[a][b];
	int crr[a][b];

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("enter the element for[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nenter the second matrix\n");
	printf("Enter row no.");
	scanf("%d", &a);

	printf("Enter column no.");
	scanf("%d", &b);
	int brr[a][b];

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("enter the element for[%d][%d]=", i, j);
			scanf("%d", &brr[i][j]);
		}
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", brr[i][j]);
		}
		printf("\n");
	}
	printf("MATRIX add  \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
			crr[i][j] = arr[i][j] + brr[i][j];
	}
	printf("MATRIX   \n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf(" %d", crr[i][j]);
		}
		printf("\n");
	}
}