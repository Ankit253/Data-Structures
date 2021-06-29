int Solution::solve(string A) {
    int i=0;
    int j=A.size()-1;
    int cnt=0;
    while(i<=j){
        if(A[i]==A[j]) i++,j--;
        else{
            if(i==0){
                cnt++;
                j--;
            }
            else{
                cnt+=i;
                i=0;
                
            }
        }
    }
    return cnt;
}
