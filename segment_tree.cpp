#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int N = 1 << 17;

int a[N],s[N << 1];

void build(int l,int r,int idx)
{
    if(l==r){ s[idx] = a[l]; return; }
    int m = (l+r)/2;
    build(l,m,idx*2);
    build(m+1,r,idx*2+1);
    s[idx] = min(s[idx*2],s[idx*2+1]);
}

void update(int l,int r,int idx,int x,int val)
{
    if(x<l or x>r) return;
    if(l==r){ s[idx]+=val; return; }
    int m = (l+r)/2;
    update(l,m,idx*2,x,val);
    update(m+1,r,idx*2+1,x,val);
    s[idx] = min(s[idx*2],s[idx*2+1]);
}

int query(int l,int r,int idx,int x,int y)
{
    if(x>r or y<l) return INT_MAX;
    if(x<=l and y>=r) return s[idx];
    int m = (l+r)/2;
    return min(query(l,m,idx*2,x,y),query(m+1,r,idx*2+1,x,y));
}
