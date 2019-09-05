#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
char c[20];
int c1[20];
int n,i,j,k=0,sum=0,p;
cout<<"enter a hex number:";
cin>>c;
cout<<strlen(c)<<"\n"<<c<<endl;
for(i=0;c[i]!='\0';i++)
 {
 k++;
  if(c[i]>64&&c[i]<71)
    c1[i]=((int)c[i]-55);
  else
   c1[i]=(int)c[i]-48;
 }
for(i=0;i<k;i++)
{
  cout<<c1[i];
 // sum+=c1[i]*pow(16,k-i-1);
    p=1;
    for(j=k-i-2;j>=0;j--)
       p=p*16;
  sum+=c1[i]*p;
}
cout<<"\nsum: "<<sum;
return 0;
}
