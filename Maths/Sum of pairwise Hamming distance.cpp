int Solution::hammingDistance(const vector<int> &A) {
    long long int n=A.size();
    long long count=0;
    for(int i=0;i<32;i++){
        int countone=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i)) countone++;
        }count+=countone*(n-countone)*2;
    }return count%1000000007;
}
