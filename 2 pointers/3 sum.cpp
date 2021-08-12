int Solution::threeSumClosest(vector<int> &A, int B) {
    int i=0;
    int diff=INT_MAX;
    sort(A.begin(),A.end());
    if(B==0 || A.size()==0) return 0;
    int sum=0;
    int sum1=0;
    int n=A.size();
    while(i<n){
        sum=B-A[i];
        
        int j=i+1;
        int k=A.size()-1;
        //if(sum>=B) return sum+A[j+1];
        while(j<k){
            if(A[j]+A[k]==sum) return B;
            else if(A[j]+A[k]<sum){
                if(abs((A[j]+A[k]+A[i])-B)<diff){
                    diff=abs((A[j]+A[k]+A[i])-B);
                    sum1=A[j]+A[k]+A[i];
                }
                j++;
            }else{
                if(abs((A[j]+A[k]+A[i])-B)<diff){
                    diff=(A[j]+A[k]+A[i])-B;
                    sum1=A[j]+A[k]+A[i];
                }
                k--;
                
            }
        }i++;
    }return sum1;
}

