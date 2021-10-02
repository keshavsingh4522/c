// code by yctseng1227
// UVA 1207
#include <iostream>
using namespace std;

#define min(x, y) ((x) < (y) ? (x) : (y))

string x, y;
int dp[505][505] = {}, lx, ly;

void solve(){
    for(int i = 1; i <= lx; i++){
        dp[i][0] = i;
	}
    for(int i = 1; i <= ly; i++){
        dp[0][i] = i;
	}
    for(int i = 1; i <= lx; i++) {
        for(int j = 1; j <= ly; j++) {
            if(x[i-1] == y[j-1])
                dp[i][j] = dp[i-1][j-1];
            else {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
            }
        }
    }
	cout << dp[lx][ly] << endl;
}

int main() {
	while(cin >> lx >> x){
		cin >> ly >> y;
        solve();
    }
    return 0;
}

