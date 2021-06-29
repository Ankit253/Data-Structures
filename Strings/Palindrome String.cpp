int Solution::isPalindrome(string A) {
    string str;
    for(int i=0; i<=A.length();i++){
        if(isalnum(A[i])){
            if(A[i]>=65 && A[i]<=92){
                str.push_back(A[i]+32);
            }else str.push_back(A[i]);
        }else continue;
    }
    int n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]) return 0;
    }
    return 1;
}