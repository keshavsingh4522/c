#include<iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  stack<int>s;
  int n,temp;
  cout<<"Enter number of elements to insert in stack: ";
  cin>>n;
  cout<<"Enter "<<n<<" elements in stack: ";
  while (n>0){
    cin>>temp;
    s.push(temp);
    n--;
  }
  cout<<"top elements of stack is: "<<s.top()<<endl;
  return 0;
}
