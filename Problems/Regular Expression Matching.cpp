class Solution {
public:
    bool isMatch(string A, string B) {
        // int n=s.length();
        // int m=p=length();
        bool dp[B.length()+1][A.length()+1];
        for(int i=0;i<=B.length();i++){
            for(int j=0;j<=A.length();j++){
                if(i==0 && j==0){
                    dp[i][j]=true;
                }
                else if(i==0){
                    dp[i][j]=false;
                }
                else if(j==0){
                    char p=B[i-1];
                    if(p=='*'){
                        dp[i][j]=dp[i-2][j];
                    }
                    else{
                        dp[i][j]=false;
                    }
                }
                else{
                    char p=B[i-1];
                    char s=A[j-1];
                    if(p=='*'){
                        dp[i][j]=dp[i-2][j];
                        char sl=B[i-2];
                        if(sl=='.' || sl==s){
                            dp[i][j]= dp[i][j] || dp[i][j-1];
                        }
                    }else if(p=='.' ){
                        dp[i][j]=dp[i-1][j-1];
                    }
                    else if(p==s){
                        dp[i][j]=dp[i-1][j-1];
                    }
                    else{
                        dp[i][j]=false;
                    }
                }
            }
        }
         if(dp[B.length()][A.length()]){
             return 1;
         }
         else{
             return 0;
         }
    }
};