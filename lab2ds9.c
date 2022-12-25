#include<stdio.h>
 void main()
 {
     printf("Ayushi Tyagi\n");
    int a[10],b[10],c[10],i,j,k=0,m,n;
    printf("Enter the number of elements of set A\n");
    scanf("%d",&m);
    printf("Enter the elements of set A\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the number of elements of set B\n ");
    scanf("%d",&n);
    printf("enter the elements of set B\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    for(i=0;i<m;i++)
    {
      for(j=0;j<k;j++)
      {
          if(c[j]==a[i])
            break;
      }
        if(j==k)
        {
            c[k]=a[i];
            k++;
        }
    }
      for(i=0;i<n;i++)
      {
          for(j=0;j<k;j++)
        {
                if(c[j]=b[i])
                break;

        }
        if(j==k)
        {
            c[k]=b[i];
             k++;
        }

      }
      printf("union of set A and B is \n");
       for(i=0;i<k;i++)
        printf("%d",c[i]);

 }

