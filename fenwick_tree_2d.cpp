#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define MOD 1e9 + 7

vector<vector<int> > a;
int m,n,q;

void update(int x,int y,int val)
{
    int i = x,j = y;
    while(x<=m)
    {
        y = j;
        while(y<=n)
        {
            a[x][y]+=val;
            y+=(y & -y);
        }
        x+=(x & -x);
    }
}

int read(int x,int y)
{
    int val = 0,i = x,j = y;
    while(x>0)
    {
        y = j;
        while(y>0)
        {
            val+=a[x][y];
            y-=(y & -y);
        }
        x-=(x & -x);
    }
    return val;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> m >> n >> q;

    a.resize(m+1);

    for(int i = 0;i <= m;i++) a[i].resize(n+1);
    for(int i = 1;i <= m;i++)
    {
        a[i].resize(n+1);
        for(int j = 1;j <= n;j++){ int x; cin >> x; update(i,j,x); }
    }

    while(q--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << read(x2,y2)-read(x2,y1-1)-read(x1-1,y2)+read(x1-1,y1-1) << endl;
    }
}
