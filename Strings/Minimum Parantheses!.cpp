int Solution::solve(string A) {
    int n=A.size();
    int r=0;
    int l=0;
    for(int i=0; i<n;i++){
        if(A[i]=='(') r++;
        else r--;
        if(r==-1){
            r+=1;
            l+=1;
        }
    }
    return l+r;
    
}
