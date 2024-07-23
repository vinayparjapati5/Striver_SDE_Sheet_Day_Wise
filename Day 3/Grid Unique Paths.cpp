class Solution {
public:

    int CountPaths(int i, int j, int m, int n, vector<vector<int>>&dp){
            
            // recursive -->exponential tym
        /*(i==(n-1) && j==(m-1)) return 1;
        if(i>=n || j>=m) return 0;

        else return CountPaths(i,j+1,m,n) + CountPaths(i+1, j,m,n);
    
    */
        

        if(i==(m-1) && j==(n-1)) return 1;
        if(i>=m || j>=n) return 0;

        if(dp[i][j]!=-1){
            return dp[i][j];  // memoziation
        }
        
        else return dp[i][j] =  CountPaths(i,j+1,m,n,dp) + CountPaths(i+1, j,m,n,dp);



    }
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

        //dp[1][1] = 1
        int num = CountPaths(0,0,m,n,dp);

        if(m==1 &&n==1){
            return num;
        }
        return dp[0][0];
    }
};
