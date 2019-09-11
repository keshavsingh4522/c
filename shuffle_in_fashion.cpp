#include<stdio.h>
#include<iostream>
using namespace std;
void shuffle(int *p,int n)
{
    int i,j,j1,temp,n1,*p1,*p2;
    p1=(int *)malloc(sizeof(int));
    p2=(int *)malloc(sizeof(int));
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      {
          if(p[i]<p[j])
          {
              temp=p[i];
              p[i]=p[j];
              p[j]=temp;
          }
      }
      n1=n/2+1;
      for(i=0,j=0;i<n;i++)
      {
          if(i<n1)
          *(p1+i)=*(p+i);
          else
          {
              *(p2+j)=*(p+i);
              j+=1;
          }
      }
      j=0;
      j1=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
         {
             if(i!=n-1)
              cout<<*(p2+j)<<" => ";
             else
              cout<<*(p2+j);
             j+=1;
         }
        else
          {
              if(i!=n-1)
                cout<<*(p1+j1)<<" <= ";
              else
                cout<<*(p1+j1);
              j1+=1;
          }
    }
}
int main()
{
    int *p,i,j,n;
    p=(int *)malloc(sizeof(int));
    cout<<"enter number of element in array:";
    cin>>n;
    for(i=0;i<n;i++)
     cin>>*(p+i);
     shuffle(p,n);
return 0;
}
/*
output:
enter number of element in array:5
12 34 22 67 89
12 <= 67 => 22 <= 89 => 34
*/
