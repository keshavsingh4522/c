//greatest common denominator
#include<conio.h>
#include<iostream.h>
void fun(int *x,int *y)
{
	int r=1;
		while(r!=0)
	      	 {
	      	 	r=*x%*y;
	      	 	if(r==0)
	      	 	  break;
	      	 	else
				{
				*x=*y;
	      	 	*y=r;
	      	    }
			 }
}
int main()
{
 clrscr();
	int a,b,r=1;
	 cout<<"enter value of a: ";
	    cin>>a;
	cout<<"enter value of b: ";
	    cin>>b;
	    if(a>b)
	       {
		    fun(&a,&b);
		    cout<<"\ngcd is: "<<b;
		   } 
	    else
	      {
		   fun(&b,&a);
		   cout<<"\ngcd is: "<<a;
	      }
	      getch();
	return 0;
}
