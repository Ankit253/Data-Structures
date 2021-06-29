string Solution::solve(string A) {
    int n=A.size();
    string rev="";
    int len=0;
    int i;
    for(i=n-1;i>=0;i--){
        char c=A[i];
        if(isspace(c)){
            //rev+=c;
            if(len>0){
                for(int j=i+1;j<=i+len;j++){
                    rev+=A[j];
                }
                rev+=' ';
                len=0;
            }
        }else{
            len++;
        }
    }
    if(len>0){
        for(int j=0;j<len;j++){
            rev+=A[j];
        }
    }
    int s=rev.size();
    if(rev[s-1]==' '){
        rev.pop_back();
    }    
    return rev;
}
