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

    for (int j=0;j<n;j++)
    {
        printf("%d ",arr[j]); //Printing each element
    }
}