#include<conio.h>
#include"iostream.h"
#include"math.h"
void main()
{
clrscr();
	int  r,n,n1,c=0,sum=0;
	cout<<"enter a number : ";
	cin>>n;
	n1=n;
	while(n>0)
	  {
	  r=n%10;
	  n=n/10;
	  c++;
	  }
	  n=n1;
	while(n>0)
	{
	   r=n%10;
	   sum=sum+pow(r,c);
	  n=n/10;
	}
       if(sum==n1)
	cout<<"num is armstrong";
       else
	 cout<<"enterd num is no armstrong";
getch();
}
