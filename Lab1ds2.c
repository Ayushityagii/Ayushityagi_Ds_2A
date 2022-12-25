#include <stdio.h>

int main()
{
    int arr[50], pos, i, n, val;

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &pos);

    printf("Please enter the value\n");
    scanf("%d", &val);

    for (i = n - 1; i >= pos - 1; i--)
        arr[i+1] = arr[i];

    arr[pos-1] = val;

    printf("Resultant array is\n");

    for (i = 0; i <= n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
