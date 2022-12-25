#include<stdio.h>
 int main()
{
    int a[20],i,m,n;
    printf("How many elements?");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("Enter element to search:\n");
    scanf("%d",&m);

    for(i=0;i<n;++i)
        if(a[i]==m)
            break;

    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");

    return 0;
}
