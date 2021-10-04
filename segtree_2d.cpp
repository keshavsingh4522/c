#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 1;

int n;
int a[N][N],s[N << 2][N << 2];

void buildy(int lx,int rx,int idxx,int ly,int ry,int idxy)
{
    if(ly==ry){ if(lx==rx) s[idxx][idxy] = a[lx][ly]; else s[idxx][idxy] = s[idxx*2][idxy]+s[idxx*2+1][idxy]; }
    else
    {
        int m = (ly+ry)/2;
        buildy(lx,rx,idxx,ly,m,idxy*2),buildy(lx,rx,idxx,m+1,ry,idxy*2+1);
        s[idxx][idxy] = s[idxx][idxy*2]+s[idxx][idxy*2+1];
    }
}

void buildx(int l,int r,int idx)
{
    if(l!=r) 
    {
        int m = (l+r)/2;
        buildx(l,m,idx*2),buildx(m+1,r,idx*2+1);
    }
    buildy(l,r,idx,1,n,1);
}

void updatey(int lx,int rx,int idxx,int ly,int ry,int idxy,int x,int y,int k)
{
    if(y<ly or y>ry) return;
    if(ly==ry){ if(lx==rx) s[idxx][idxy] = k; else s[idxx][idxy] = s[idxx*2][idxy]+s[idxx*2+1][idxy]; }
    else
    {
        int m = (ly+ry)/2;
        updatey(lx,rx,idxx,ly,m,idxy*2,x,y,k),updatey(lx,rx,idxx,m+1,ry,idxy*2+1,x,y,k);
        s[idxx][idxy] = s[idxx][idxy*2]+s[idxx][idxy*2+1];
    }
}

void updatex(int l,int r,int idx,int x,int y,int k)
{
    if(x<l or x>r) return;
    if(l!=r)
    {
        int m = (l+r)/2;
        updatex(l,m,idx*2,x,y,k),updatex(m+1,r,idx*2+1,x,y,k);
    }
    updatey(l,r,idx,1,n,1,x,y,k);
}

int ready(int lx,int rx,int idxx,int ly,int ry,int idxy,int ax,int ay,int bx,int by)
{
    if(ay>ry or by<ly) return 0;
    if(ay<=ly and by>=ry) return s[idxx][idxy];
    int m = (ly+ry)/2;
    return ready(lx,rx,idxx,ly,m,idxy*2,ax,ay,bx,by)+ready(lx,rx,idxx,m+1,ry,idxy*2+1,ax,ay,bx,by);
}

int readx(int l,int r,int idx,int ax,int ay,int bx,int by)
{
    if(ax>r or bx<l) return 0;
    if(ax<=l and bx>=r) return ready(l,r,idx,1,n,1,ax,ay,bx,by);
    int m = (l+r)/2;
    return readx(l,m,idx*2,ax,ay,bx,by)+readx(m+1,r,idx*2+1,ax,ay,bx,by);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    
}
