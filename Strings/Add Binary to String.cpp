string Solution::addBinary(string A, string B) {
    int a=A.size()-1;
    int b=B.size()-1;
    int sum=0, carry=0;
    string ans;
    while(a>=0 || b>=0){
        sum=carry;
        if(a>=0) sum+=A[a]-'0';
        if(b>=0) sum+=B[b]-'0';
        
        ans+=to_string(sum%2);
        carry=sum/2;
        a--;
        b--;
    }
    if(carry!=0) ans.push_back('1');
    reverse(ans.begin(),ans.end());
    return ans;
}
