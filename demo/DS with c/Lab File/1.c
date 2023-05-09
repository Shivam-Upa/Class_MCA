#include <stdio.h>
void add();
void mult();

void main()
{
    int ch;
    do
    {
        printf(" Enter 1 for add:\n Enter 2 for mult:\n Enter 3 for exit:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            mult();
            break;
        case 3:
            printf("Thanks");
            break;
        default:
            printf("wrong");
            break;
        }
    } while (ch <= 3);
}
void add()
{
    // int arr1[2][2] = {1,2,3,4};
    // int arr2[2][2] = {1,2,3,4};
    int row, col;
    printf("Size of array row:\n");
    scanf("%d", &row);
    printf("Size of array col:\n");
    scanf("%d", &col);

    int arr1[row][col];

    int arr2[row][col];
    printf("element array 1:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("element array 2:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr3[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("------------------- Addition Function called ----------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf(" \n");
    }
}

void mult()
{
    // int arr1[2][2] = {1,2,3,4};
    // int arr2[2][2] = {1,2,3,4};.
    int row, col;
    printf("Size of array row:\n");
    scanf("%d", &row);
    printf("Size of array col:\n");
    scanf("%d", &col);

    int arr1[row][col];

    int arr2[row][col];
    printf("element array 1:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("element array 2:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[2][2] = {0};
    int k = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("------------------- Multiplication Function called ----------\n");  
    printf("\n");    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf(" \n");
    }
    printf("\n");
}