//program to reverse the digits of a number.
// example: num = 456		then rev = 654

#include<iostream>
using namespace std;
void reverse(int);

int main()
{
	int num;

	cout<<"\nEnter a number: ";
	cin>>num;
	reverse(num);
	return 0;
}
void reverse(int a)
{
	int rem,rev=0;
	while(a>0)
	{
		rem=a%10;
		a/=10;
		rev=rev*10+rem;
	}
	cout<<"\nReverse is: "<<rev;
}
