#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,m1[10][10],m2[10][10],mul[10][10];
    printf("Enter no. of rows and coloumns for First Matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter no.of rows and coloumns for Second Matrix:\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Can't be multiplied");
    }
    else
    {
        printf("Enter first matrix elements \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter Second matrix elements\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    mul[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("Multiplied matrix\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
