#include <stdio.h>

void sub(int arr[],int num)
{
    int j;
    for (j=0;j<num;j++)
    {
        arr[j]=arr[j]-1;
    }
}

int main()
{
    int num,i;
    printf("Enter the number of elements: ");
    scanf("%d",&num);
    int arr[num];
    printf("\nEnter the elements: ");
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    sub(arr,num);

    printf("\nThe updated array is: ");
    for (i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}