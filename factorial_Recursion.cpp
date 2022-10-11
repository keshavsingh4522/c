//Program to calculate factorial of a number using recursion concept
#include <iostream>
using namespace std;
long factorial(int);    //function prototype

//driver function
int main(void) {
	long num,fact;
  cout<<"\nEnter the number: ";
	cin>>num;

  fact = factorial(num);    //calling factorial function

  cout<<"\nThe factorial of "<< num <<" is "<< fact <<" \n";
	return 0;
}

//function using recursion concept
long factorial(int n)
{
	if(n==1)                    //base case
		return 1;
	return n*factorial(n-1);    //recursive call
}
