class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<int> sq; 
        int now = 1,add=3; 
        while(now<=n) {
        sq.push_back(now); 
        now+=add;
            add+=2;
        }
        vector<bool> dp(n+1,0); 
       // dp[0]=1; 
        for(int i = 1;i<=n;i++) {
            for(int j : sq) {
                if(i-j>=0) {
                     dp[i]=dp[i]||(dp[i-j]==0);
                }
                else break;
            }
        }
        return dp[n];
    }
};
