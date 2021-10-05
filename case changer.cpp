#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='A'&&ch<='Z')
    {
        ch |=' ';
    }
    else
    {
        ch &='_';
    }
    cout<<ch;
}