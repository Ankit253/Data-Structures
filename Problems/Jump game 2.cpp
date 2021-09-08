class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 0;
        }
//         int count=0;
//         // int i=n-2;
//         int curr=n-1;
//         while(curr!=0){
//             for(int i=0;i<curr;i++){
//                 if(nums[i]+i>=curr){
//                     curr=i;
//                     count++;
//                     break;
//                 }
//             }
//         }
//         return count;
        
        vector<int> dp(n,INT_MAX);
        dp[0]=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(j+nums[j]>=i){
                    dp[i]=min(dp[i],dp[j]+1);
                    break;
                }
            }
        }
        return dp[n-1];
    }
};