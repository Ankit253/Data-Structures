int Solution::solve(vector<int> &A, int B) {
    int j=0;
    unordered_map<int,int> map;
    int count=0;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(map.find(A[i])!=map.end()){

        }
        map[A[i]]++;
        if(map.size()==B){
            count++;
        }else if(map.size()>B){
            
        }
    }

}
