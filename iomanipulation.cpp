/*************************************************************************************************
*                                                                                                *
*                                                                                                *
*                             INPUT/OUTPUT MANIPULATION TUTORIAL                                 *
*                                                                                                *
*                                                                                                *
**************************************************************************************************/

//CODE

//Arthimatic Operations on TWO Numbers

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout<<"Enter the two numbers: "<<endl;
    int num1,num2,add,sub,mul;
    cin>>num1>>num2;
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    cout<<""Addition of two numbers: "<<add<<endl;
    cout<<""Sub of two nums: "<<sub<<endl;
    cout<<"Multiplication of two numbers: "<<mul<<endl;

return 0;

}
