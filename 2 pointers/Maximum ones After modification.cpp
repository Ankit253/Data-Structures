int Solution::solve(vector<int> &A, int B) {
    int i=0;
    int n=A.size();
    int l=0;
    int count=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count++;
        }
        while(count>B){
            if(A[l]==0){
                count--;
            }
            l++;
        }
        ans=max(ans,i-l+1);
    }
    return ans;
}

