int Solution::lengthOfLastWord(const string A) {
    int n=A.size();
    int len=0;
    for(int i=n-1; i>=0;i--){
        char c=A[i];
        if(isspace(c)){
            if(len!=0){
                return len;
            }else len=0;
        }else len++;
    }
    return len;
}
