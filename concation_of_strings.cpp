#include"conio.h"
#include"iostream.h"
void main()
{
clrscr();
	int i,j;
	char (*a),(*b),(*c);
	 cout<<"Enter First String: ";
	 cin>>a;
	 cout<<"Enter second string: ";
	 cin>>b;
	 for(i=0;a[i]!='\0';i++)
	 c[i]=a[i];
	 for(j=0,i;b[j]!='\0';j++,i++)
	 c[i]=b[j];
	 c[i]='\0';
      cout<<"after concation string is: "<<c;
getch();
}
