#include <stdio.h>
int main()
{
    int n, i, d, a[100], b[100];

    printf("Enter the number of elements in array\n");
    scanf("%d", &n);

    printf("Enter the array elements\n");

    for (i = 0; i < n ; i++)
        scanf("%d", &a[i]);
    for (i = n - 1, d = 0; i >= 0; i--, d++)
        b[d] = a[i];
    for (i = 0; i < n; i++)
        a[i] = b[i];

    printf("Reverse array is\n");

    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
