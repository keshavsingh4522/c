#include<bits/stdc++.h>
using namespace std;
bool poweroftwo(int );
int main()
{
    int x;
    cin>>x;
    bool a=poweroftwo(x);
    if(a==x)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}
bool poweroftwo(int a)
{
    return a&(a-1)==0;// it will return a if a&(a-1)==0
}