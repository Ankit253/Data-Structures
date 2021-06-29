string Solution::longestPalindrome(string A) {
    int s=0,e=0;
    int n=A.length();
    vector<vector<bool>>dp(n,vector<bool>(n,0));
    for(int i=0;i<n;i++){
        dp[i][i]=true;
    }
    for(int l=2;l<=n;l++){
        for(int i=0;i<=n-l;i++){
            int j=i+l-1;
            if(A[i]==A[j]){
                if(l==2){
                    dp[i][j]=true;
                }else{
                    dp[i][j]=dp[i+1][j-1];
                }
            }else{
                dp[i][j]=0;
            }
            if(dp[i][j]==true){
                if(j-i>e-s){
                    s=i;
                    e=j;
                }
            }
        }
    }
    string ans="";
    for(int i=s;i<=e;i++){
        ans+=A[i];
    }
    return ans;
}
