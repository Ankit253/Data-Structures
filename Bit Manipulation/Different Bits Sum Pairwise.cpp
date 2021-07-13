int Solution::cntBits(vector<int> &A) {
    long long int ans=0;
    long long int n=A.size();
    for(int i=0;i<31;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i)) c++;   //counting set bits at the ith index of all the integers
        }
        ans+=2*c*(n-c);   
        ans=ans%1000000007;
    }
    return ans;

}
