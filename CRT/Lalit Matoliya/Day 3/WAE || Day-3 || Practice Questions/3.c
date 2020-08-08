#include <stdio.h>
//display matrix
void display(int a[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      printf("%d ",a[i][j]);
    printf("\n");
  }
}

//Addition of matrix
void add(int m1[3][3],int m2[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      printf("%d ",m1[i][j]+m2[i][j]);
    printf("\n");
  }
}

//Multiplication of matrix
void mul(int m1[3][3],int m2[3][3])
{
  int i,j,k;
  for(i=0;i<3;i++)
  {
    for(k=0;k<3;k++)
    {
      c=0;
      for(j=0;j<3;j++)
        c+=m1[i][j]*m2[j][i];
      printf("%d ",c);
    }
    printf("\n");
  }
}

//main function
int main()
{
  int m1[3][3]={1,1,1,2,2,2,1,1,1};
  int m2[3][3]={4,6,2,6,1,3,2,4,4};

  printf("Mtrix m1\n");
  display(m1);
  printf("Mtrix m2\n");
  display(m2);

  //Addition
  printf("Addition of M1 and M2 \n");
  add(m1,m2);

  //Multiplication of matrix
  printf("Multiplication of M1 and M2 \n");
  mul(m1,m2);
  return 0;
}
