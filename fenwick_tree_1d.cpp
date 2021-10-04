#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define MOD 1e9 + 7

vector<int> a;
int n,q;

void update(int idx,int num)
{
    while(idx<=n)
    {
        a[idx]+=num;
        idx+=(idx&-idx);
    }
}

int read(int idx)
{
    int ans = 0;
    while(idx>0)
    {
        ans+=a[idx];
        idx-=(idx&-idx);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;

    a.resize(n);

    for(int i = 0;i < n;i++){ int x; cin >> x; update(i+1,x); }

    while(q--)
    {
        int x,y;
        cin >> x >> y;
        cout << read(y)-read(x-1) << endl;
    }
}
