#include <stdio.h>
int main()
{
int i, first, last , mid, n, m, array[100];
printf("Enter number of elements \n");
scanf("%d",&n);
printf("Enter ELements", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find \n");
scanf("%d", &m);
first = 0;
last = n - 1;
mid = (first+last)/2;
while (first<= last) {
if(array[mid] < m)
first = last + 1;
else if (array[mid] == m)
    {
printf("%d found at location %d.n",m, mid+1);
break;
}
else
last = mid - 1;
mid = (first + last)/2;
}
if(first > last)
printf("Not found! %d isn't present in the list.n", m);
return 0;
}
