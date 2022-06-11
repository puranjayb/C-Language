#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n); //Inputting the number of elements

    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); //Inputting each element
    }

    printf("The array is: ");

    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]); //Printing each element
    }
    return 0;
}