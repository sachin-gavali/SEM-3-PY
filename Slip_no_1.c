// slip  no 1
#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    int temp;
    printf(" Enter size of the Array :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Array Elements : %d ", i);
        scanf("%d", &arr[i]);
    }
    // insertion sort

    for (int i = 1; i < n; i++)
    {
       arr[i] = temp;
        {
            for (int j = i - 1; (j >= 0) && (temp < arr[j]); j--)
            {

                arr[j + 1] = arr[j];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("  %d   ", arr[i]);
    }
}