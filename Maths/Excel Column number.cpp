int value(char A){
    char ch;
    int n=0;
    for(ch='A';ch<='Z';ch++){
        n=n+1;
        if(A==ch){
            return n;
        }
    }
}

int Solution::titleToNumber(string A) {
    char ch;
    int n=A.size();
    int ans;
    for(int i=0;i<n;i++){
        ans+=value(A[i])*pow(26,n-i-1);
    }return ans;
}
