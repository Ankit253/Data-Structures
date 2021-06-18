vector<int> Solution::nextPermutation(vector<int> &A){
    int n=A.size();
    int i=n-1;
    for(;i>0;i--){
        if(A[i]>A[i-1]){
            break;
        }
    }
    if(i==0){
        sort(A.begin(),A.end());
        return A;
    }
    int mini=INT_MAX;
    int index=i;
    for(int j=n-1;j>=i;j--){
        if(A[j]<mini && A[j]>A[i-1]){
            index=j;
            mini=A[j];
        }
    }
    swap(A[i-1],A[index]);
    sort(A.begin()+i,A.end());
    return A;
}