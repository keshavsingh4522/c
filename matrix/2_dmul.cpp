#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,a[2][2],b[2][2],c[2][2];
printf("enter size of both square matrix \n");
scanf("%d",&n);
// a=(int **)malloc(sizeof(int)*n);
// b=(int **)malloc(sizeof(int)*n);
printf("enter %d element in 1st matrix in \n",i*j);
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
printf("enter %d element in 2nd matrix in \n",i*j);
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
printf("1st matrix \n");
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
printf("2nd matrix \n");
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
printf("multiplication matrix is\n");
for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{   c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",c[i][j]);
		printf("\n");
	}
return 0;
}
