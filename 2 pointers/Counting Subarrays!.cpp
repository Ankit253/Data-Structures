int Solution::solve(vector<int> &A, int B) {
    int sum;
    int i=0;
    int j=0;
    int count=0;
    while(i<A.size()){
        sum=0;
        for(int z=i;z<=j;z++){
            sum+=A[z];
        }
        if(sum<B){
            count++;
            j++;
            if(j==A.size()){
                j=i+1;
                i=j;
            }
        }
        else{
            i++;
            j=i;
        }
    }
    return count;
}
