#include<stdio.h>
int main()
{

printf("AYUSHI TYAGI\n");
int a[10],b[10],c[10],i,j,n1,n2,flag=0,k=0;
printf(" enter size of 1st set");
scanf("%d",&n1);
printf("enter element of 1st set");
for(i=0;i<n1;i++){
scanf("%d",&a[i]);

}
printf("enter size of 2nd set");
scanf("%d",&n2);
printf("enter element of 2nd set");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;i<n2;i++)
{
flag=0;
for(j=0;j<n1;j++)
{
if(b[i]==a[j])
flag=1;
}
if(flag==1){
c[k]=b[i];
k++;
}
}
printf("intersection of two sets is");
for(i=0;i<k;i++)
{
printf("%d",c[i]);
}
}
