int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> b=A;
    for(int i=0; i<A.size();i++){
        if(b[abs(b[i])]>=0){
            b[abs(b[i])]=-b[abs(b[i])];
        }else{
            return abs(b[i]);
        }
    }
    
    return -1;
    
    
    /*set<int> s;
    int i;
    for(i=0;i<A.size();i++){
        s.insert(A[i]);
        if(s.size()!=i+1){
            return A[i];
        }
    }
    return -1;
    */
}
