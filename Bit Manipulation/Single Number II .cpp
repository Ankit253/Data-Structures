int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int result=0;
    vector<int> a;
    for(int i=0;i<31;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i)) c++;
        }
        if(c%3==0) a.push_back(0);
        else a.push_back(1);
    }
    long long int ans=0;
    for(int i=0;i<a.size();i++){
        ans+=pow(2,i)*a[i];
    }
    return ans;

}
