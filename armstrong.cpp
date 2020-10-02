#include<iostream>
int main()
{
	int  result ,n,n1,c=0,sum=0; 
	std::cout<<"enter a number : ";
	std::cin>>n;
	n1=n;
	while(n1!=0)
	  {
	      // remainder will accquire the last digit
    	  c = n1%10;
    	  sum += c*c*c; 
    	  //removing last digit from n1
    	  n1 /= 10;
     }
	   if(sum == n)
	    std::cout<< n <<" is armstrong number.";
       else
	    std::cout<< n <<" is not an armstrong number.";
return 0;
}
