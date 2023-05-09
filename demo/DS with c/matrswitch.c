#include <stdio.h>
// void add();
// void sub();
void mult();
void main()
{
    int expr;
    do
    {
        printf("Enter 1 for Add the matrix:\n");
        printf("Enter 2 for Sum the matrix:\n");
        printf("Enter 3 for Multi the matrix:\n");
        printf("Enter 4 for exit:\n");
        scanf("%d", &expr);
        switch (expr)
        {
        case 1://add();
            mult();
            printf("add");
            break;

        // case 2://sub();
        //     break;

        // case 3://mult();
        //     break;
        case 4:
            break;
        default:
            printf("no");
        }
    } while (expr <= 3);
}

void mult()
{
		int a,b,c,i,j,k;
	printf("Enter row no.");
	scanf("%d",&a);
	
	printf("Enter column no.");
	scanf("%d",&b);
	int arr[a][b];   
	int crr[a][b];
	
	for(i=0;i<a;i++)
	{
        for(j=0;j<b;j++)
      	{
		printf("enter the element for[%d][%d]=",i,j);
		scanf("%d",&arr[i][j]);
	   }
    }
     printf("MATRIX   \n");
    for(i=0;i<a;i++)
	{
        	for(j=0;j<b;j++)
      	{
		printf(" %d",arr[i][j]);
	   }
	   printf("\n");
    }
    printf("\nenter the second matrix\n");
    printf("Enter row no.");
	scanf("%d",&a);
	
	printf("Enter column no.");
	scanf("%d",&b);
	int brr[a][b];
	
	for(i=0;i<a;i++)
	{
        	for(j=0;j<b;j++)
      	{
		printf("enter the element for[%d][%d]=",i,j);
		scanf("%d",&brr[i][j]);
	   }
    }
    printf("MATRIX   \n");
    for(i=0;i<a;i++)
	{
        for(j=0;j<b;j++)
      	{
		printf(" %d",brr[i][j]);
	   }
	   printf("\n");
    }
    printf("MATRIX mul  \n");
    for(i=0;i<a;i++)
	{
        	for(j=0;j<b;j++)
      	{
      		crr[i][k]=0;
      		for(k=0;k<b;k++)
      		{
			  crr[i][j]+=arr[i][k]*brr[k][j];
	   }
    }
}
 printf("MATRIX   \n");
    for(i=0;i<a;i++)
	{
        	for(j=0;j<b;j++)
      	{
		printf(" %d",crr[i][j]);
	   }
	   printf("\n");
    }
}
