int Solution::maximumGap(const vector<int> &A) {
    vector<int> b;
    b=A;
    sort(b.begin(),b.end());
    int diff=0;
    for(int i=0;i<A.size()-1;i++){
        int d=b[i+1]-b[i];
        if(d>diff) diff=d;
    }
    return diff;
}
