#include<iostream>
using namespace std;
int main()
{
int n,i,j,k;
  cout<<"Enter a number: ";
  cin>>n;
   for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
	  cout<<' ';
	cout<<'/';
        if(i==1)
          {
            for(k=0;k<2*i;k++)
	      cout<<' ';
          }
	if(i>=2)
	  {
            cout<<' '<<'/';
            for(k=0;k<(i-2)*2;k++)
              cout<<' ';
            cout<<'\\'<<' ';
          }
	cout<<'\\'<<endl;
  }
   for(i=0;i<n;i++)
   {
      for(k=0;k<(i+2);k++)
        cout<<' ';
      cout<<'\\';
      if(i<=n-3)
       {
        cout<<' '<<'\\';
        for(k=0;k<(n-3-i)*2;k++)
         cout<<' ';
        cout<<'/'<<' '<<'/';
       }
      else
       {
        for(k=0;k<(n-1-i)*2;k++)
         cout<<' ';
        cout<<'/';
       }
      cout<<endl;
   }
return 0;
}
