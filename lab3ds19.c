#include <stdio.h>
int main(){
   int m, n, i, j, m1[10][10], t[10][10];
   printf("Enter rows and columns :");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &m1[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         t[j][i] = m1[i][j];
   printf("Transpose of the matrix:");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", t[i][j]);
      printf("");
   }
   return 0;
}
