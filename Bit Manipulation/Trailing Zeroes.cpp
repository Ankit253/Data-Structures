int Solution::solve(int A) {
    vector<int> a;
    while(A){
        int rem=A%2;
        a.push_back(rem);
        A=A/2;
    }
    int i=0;
    while(a[i]==0){
        i++;
    }
    
    return i;
}