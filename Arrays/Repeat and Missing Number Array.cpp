vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n=A.size();
    long long int sumarr=0;
    long long int sumsqarr=0;
    for(int i=0;i<n;i++){
        sumarr+=(long long int)A[i];
        sumsqarr+=(long long int)A[i]*(long long int)A[i];
    }
    
    long long int sum_n=n*(n+1)/2;
    long long int sum_nsq=n*(n+1)*(2*n+1)/6;
    long long int misminusrep=sum_n-sumarr;
    
    long long int mis_rep2=sum_nsq-sumsqarr;
    
    long long int misplusrep=mis_rep2/misminusrep;
    
    int mis=(misminusrep+misplusrep)/2;
    int rep=(misplusrep-misminusrep)/2;
    vector<int> ans;
    ans.push_back(rep);
    ans.push_back(mis);
    return ans;
    
}
