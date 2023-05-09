#include <stdio.h>
// void add();
// void sub();
// void mult();
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
        case 1: // add();
            printf("add");
            break;

        // case 2://sub();
        //     break;

        // case 3://mult();
        //     break;
        case 2:
            break;
        default:
            printf("no");
        }
    } while (expr <= 3);
}
void add(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr1[n][m];
    int arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    
}