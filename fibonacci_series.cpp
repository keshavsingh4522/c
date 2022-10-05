class Solution {
public:
    int dp[100000];
    int fb(int n)
    {
        if(n==0)
            return dp[0]=0;
        else if(n==1)
            return dp[1]=1;
        else
        {
            if(dp[n]!=-1)
                return dp[n];
            else
                return dp[n]=fb(n-1)+fb(n-2);
            
        }

    }
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return fb(n);
        
    }
};
