#include <stdio.h>
int main()
{
    int r,c,sum=0;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("-----The matrix is-----\n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("\nSum of elements of the matrix is: %d",sum);
}