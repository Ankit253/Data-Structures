int Solution::strStr(const string A, const string B) {
    int n=A.length();
    int m=B.length();
    int i;
    for(i=0;i<n;i++){
        if(A[i]==B[0] && (n-i)>=m){
            int j;
            for(j=0;j<m;j++){
                if(A[i+j]==B[j]) continue;
                else break;
            }
            if(j==m){
                return i;
            }
        }
    }
    return -1;
}
