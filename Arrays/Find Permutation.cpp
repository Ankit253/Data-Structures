vector<int> Solution::findPerm(const string A, int B) {
    vector<int> arr;
    int smallest=1;
    int largest=B;
    for(int i=0;i<A.size();i++){
        if(A[i]=='D'){
            arr.push_back(largest);
            largest--;
        }else{
            arr.push_back(smallest);
            smallest++;
        }
    }arr.push_back(largest);
    return arr;
}
