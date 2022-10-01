#include <iostream>
using namespace std;

class stack{
	public :
    int top;
    int arr[10];

    stack()
    {
       cout << "Object Is created\n";
	   top = -1;
    }
	
	bool isEmpty()
	{
		if(top == -1)
		{
			return 1;
		}
		return 0;
	}
	bool isFull()
	{
		if(top >= 10)
		{
			return 1;
		}
		
		return 0;
	}
	
	void push(int data)
	{
		if(isFull())
		{
			cout << "Stack Overflow\n";
		}
		else
		{
			top++;
			arr[top] = data;
			cout << data << " is pushed in stack at Position : " << top << "\n"; 
		}
	}
	
	void pop()
	{
		if(isEmpty())
		{
			cout << "Stack Underflow\n";
		}
		else
		{
			cout << arr[top] << " is Poppd Off From The Stack which was at index : " << top << "\n";
			top--;
		}
	}
};
 // top max -> 99 

int main()
{
    stack s;
	// stack s = new stack();
	s.push(56);
	s.push(46);
	s.push(96);
	s.push(90);
	cout << "\n\n";
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	int option;
    //cout<< "Enter Your CHoice : ";
    //cin>>option;
	int data ;
	
	do
	{
		cout << "\nCHOICE : \n1. push operation\n2. pop operation\n3. Check if Full\n4. Check If Empty\n";
	 cout<< "Enter Your CHoice : ";
     cin>>option;
    // int data ;	
	switch(option)
	{
		case 1 : cout << "Enter Value To Push : ";
		cin >> data;
		s.push(data);
		break;
		
		case 2 : s.pop();
		break;
		
		case 3 : s.isFull();
		break;
		case 4 : s.isEmpty();
		break;
	}
	
		
		
	}while(option != 0);
	
	// cout << s.top;
	// s.stack();
	// cout << s.isEmpty();
	// cout << s.top;


    return 0;
}
