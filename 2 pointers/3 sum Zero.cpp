vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> ans;
    long long int n=A.size();
    long long int i=0,sum=0;
    //long long int temp1=INT_MIN,temp2=INT_MIN,temp3=INT_MIN;
    sort(A.begin(),A.end());
    long long int c=0;
    while(i<n){
        long long int j=i+1;
        long long int k=n-1;
        while(j<k){
            sum=(long long int )A[i]+(long long int )A[j]+(long long int )A[k];
            if(sum==0){
                ans.resize(c+1);
                ans[c].push_back(A[i]);
                ans[c].push_back(A[j]);
                ans[c].push_back(A[k]);
                c++;
                    //temp1=A[i];
                    //temp2=A[j];
                    //temp3=A[k];
                
                int jj=j+1;
                while((long long int )A[j]==(long long int )A[jj]) jj++;
                j=jj;
                
            }
            else if(sum<0){
                int jj=j+1;
                while((long long int )A[j]==(long long int )A[jj]) jj++;
                
                j=jj;
            }
            else{
                int kk=k-1;
                while((long long int )A[kk]==(long long int )A[k]) kk--;
                k=kk;
            }
        }
        int ii=i+1;
        while((long long int )A[i]==(long long int )A[ii]) ii++;
        i=ii;
    }
    return ans;
}
