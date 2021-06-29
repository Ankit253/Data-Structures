string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(A[i].length()<min){
            min=A[i].length();
        }
    }
    string str;
    if(n==1){
        return A[0];    
    } 
    else{
        for(int j=0;j<min;j++){
            int i;
            for(i=0;i<n-1;i++){
                if(A[i][j]!=A[i+1][j]){
                    return str;
                }
            }str.push_back(A[i][j]);
        }
    }return str;
}
