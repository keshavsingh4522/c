// Array is the collection of similar data type, In this program we find duplicate elements from an array, 
// Suppose array have 3, 5, 6, 11, 5 and 7 elements, in this array 5 appear two times so this is our duplicate elements

#include<iostream.h>
#include<conio.h>

 void main()
 {
  int i,arr[20],j,no;
  clrscr();
  cout<<"Enter Size of array: ";
  cin>>no;
  cout<<"Enter any "<<no<<" num in array: ";
  for(i=0;i<no;i++)
  {
   cin>>arr[i];
  }
  cout<<"Dublicate Values are: ";
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    cout<<"\n"<<arr[i];
    }
   }
   }
  getch();
 }


// output
// Enter Size of Array : 5
// Enter any 5 elements in Array: 
// 5 4 5 2 3 
// Duplicate Elements are: 
// 5
