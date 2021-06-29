int Solution::solve(string A) {
    int ans;
    int n=A.length();
    for(int i=0;i<n;i++){
        char x=A[i];
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||x == 'E' || x == 'I' || x == 'O' || x == 'U'){
            ans+=n-i;
        }
    } return ans;
}
