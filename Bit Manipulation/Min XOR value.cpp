int Solution::findMinXor(vector<int> &A) {
    int ans=INT_MAX;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            int k=A[i]^A[j];
            if(k<ans) ans=k;
        }
    }
    return ans;
}
