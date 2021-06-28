int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int count=0,max;
// int max=A[A.size()-1];
// cout<<max;
    int n=A.size();
    max=A[n-1];
    while(count<B)
    {
    count=0;
    //cout<<max;
    for(int i=0;i<n;i++) 
    {
    //count+=(A[i]-max)>0?max-A[i]:0;
        if((A[i]-max)>0)
            count+=(A[i]-max);
        else
            count+=0;
        }
        max--;
    }
    return max+1;
}

