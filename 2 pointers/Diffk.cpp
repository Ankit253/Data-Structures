int Solution::diffPossible(vector<int> &A, int B) {
    int n=A.size();
    if(n==0) return 0;
    int i=0;
    int j=1;
    while(i<n && j<n){
        if(A[j]-A[i]==B && i!=j) return 1;
        else if(A[j]-A[i]<B) j++;
        else i++;
    }
    
    return 0;
}
