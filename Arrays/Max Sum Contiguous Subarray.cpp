int Solution::maxSubArray(const vector<int> &A) {
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i =0; i<A.size();i++){
        currsum+=A[i];
        if(currsum<A[i]){
            currsum=A[i];
        }if(currsum>maxsum){
            maxsum=currsum;
        }
    }return maxsum;
}