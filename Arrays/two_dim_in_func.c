#include <stdio.h>

void print(int arr[][2],int r)
{
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int arr[r][2];

    printf("Enter the elements of array: ");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe array is:\n");
    print(arr,r);
    return 0;
}