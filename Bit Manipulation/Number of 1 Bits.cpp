int Solution::numSetBits(unsigned int A) {
    vector<int> a;
    int n;
    int m;
    while(A>0){
        int rem=A%2;
        a.push_back(rem);
        A=A/2;
    }
    int count=0;
    for(int j=0;j<a.size();j++){
        if(a[j]==1) count++;
    }
    
    return count;

}
