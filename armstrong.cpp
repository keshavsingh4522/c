#include<iostream>
using namespace std;

int main()
{
  int num,num_copy, rem, sum;
  cout<<"\nEnter the number: \n";
  cin>>num;         //say num = 153

  sum = 0;
  num_copy = num;   // num_copy=153

  while(num_copy>=1)
  {
    rem = num_copy%10;    //3 5 1
    num_copy = num_copy/10; //15 1
    sum = sum + rem*rem*rem;  // 3^3 + 5^3 + 1^3
  }
	
  if(sum == num)
  cout<<num<<" is an armstrong number.\n";
  else
  cout<<num<<" is not an armstrong number.\n";
  return 0;
}
