int Solution::atoi(const string A) {
    
    //1st of all removing trailing zeros
    string b=A;
    bool cnt=true;
    if(b[0]=='+'){
        cnt=true;
        b.erase(b.begin());
    }
    else if(b[0]=='-'){
        b.erase(b.begin());
        cnt=false;
    }

    int i=0;
    while(b[i]=='0'){
        i++;
    }
    b.erase(0,i);
    
    
    string a;
    int n=b.length();
    for(int i=0;i<n;i++){
        if(isdigit(b[i])){
            a+=b[i];
        }
        else break;
    }
    
    long long int ans=0;
    int s=a.length();
    long long int digit=1;
    for(int i=s-1;i>=0;i--){
        ans+=(a[i]-'0')*digit;
        digit*=10;
        if(cnt==false && ans>2147483648){
            return INT_MIN;
        }
        else if(ans>INT_MAX && cnt==true) return INT_MAX;
    }
    
    if(!cnt){
        ans=(-1)*ans;
    }
    return ans;
    
}
