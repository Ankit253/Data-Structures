bool check_pal(string A, int s, int e){
    while(s<e){
        if(A[s]!=A[e]) return false;
        s++;
        e--;
    }
    return true;
}
 
int Solution::solve(string A) {
    int n=A.length();
    int s=0;
    int e=n-1;
    while(s<e){
        if(A[s]!=A[e]){
            if(check_pal(A,s+1,e) || check_pal(A,s,e-1)){
                return 1;
            }
            else return 0;
        }
        s++;
        e--;
    }
    return 1;
}