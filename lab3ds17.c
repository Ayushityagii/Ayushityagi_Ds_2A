#include <stdio.h>
 int main()
{
   int m, n, i, j, arr1[10][10], arr2[10][10], diff[10][10];

   printf("Enter the number of rows and columns of matrix:\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");

   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &arr1[i][j]);

   printf("Enter the elements of second matrix\n");

   for (i = 0; i < m; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", &arr2[i][j]);

   printf("difference of entered matrices:\n");

   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         diff[i][j] = arr1[i][j] - arr2[i][j];
         printf("%d\t", diff[i][j]);
      }
      printf("\n");
   }

   return 0;
}
