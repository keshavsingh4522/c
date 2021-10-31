#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>

using namespace std;

#define for0(i,n) for (int i = 0; i < (int)(n); ++i)            // 0 based indexing

void countSort(int a[],int n){
    map<int,int> c;
    for0(i,n){         //create frequency array
        c[a[i]]++;
    }
    int j = 0;          //track index of count array
    for0(i,n){
        if (c[j] != 0){
            a[i] =j;
            c[j]--;
        }
        else{
            while (c[j] == 0){
                j++;
            }
            a[i]=j;
            c[j]--;
        }
    }
}

int main(int argc,char const *argv[])
{
    int n = 11;
    //cin>>n;
    int a[n] = {4,3,2,6,2,3,1,3,2,4,2};
    //for0(i,n)
    //  cin>>a[i];
  
    countSort(a,n);
    for0(i,n)
        cout<<a[i]<<" ";
    return 0;
}
