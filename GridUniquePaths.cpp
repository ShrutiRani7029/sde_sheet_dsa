class Solution {
public:
///tabulation
int fun(int m,int n,vector<vector<int>>&dp)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0)
            {dp[0][0]=1;continue;}
            int up=0,left=0;
            if(i>0)
            up=dp[i-1][j];
            if(j>0)
            left=dp[i][j-1];

            dp[i][j]=up+left;
        }

    }
    return dp[m-1][n-1];
    
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        return fun(m,n,dp);
    }
};

///tc: o(m*n)
///sc: o(m*n)
