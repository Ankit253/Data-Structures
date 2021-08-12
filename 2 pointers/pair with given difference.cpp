int Solution::solve(vector<int> &A, int B) {
    int i,j,n;
    if(B==0 || A.size()==0) return 0;
    i=0;
    j=1;
    n=A.size()-1;
    sort(A.begin(),A.end());
    while(i<=n && j<=n){
        if((A[j]-A[i])==B) return 1;
        else if((A[j]-A[i])<B) j++;
        else i++;
    }
    
    return 0;
}
