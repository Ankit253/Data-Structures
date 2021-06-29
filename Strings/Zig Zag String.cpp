string Solution::convert(string A, int B) {
    int n=A.size();
    vector<vector<char>> v;
    v.resize(B);
    if(B==1) return A;
    if(B==2){
        int i=0;
        int j=1;
        while(i<n || j<n){
            if(i<n) v[0].push_back(A[i]);
            if(j<n) v[1].push_back(A[j]);
            i+=2;
            j+=2;
        }
    }else{    
        int b=0;
        int dir=0;
        for(int i=0;i<n;i++){
            if(dir==0){
                v[b].push_back(A[i]);
                b++;
            
                if(b>B-1){
                    dir=1;
                    b=B-2;
                }        
            }
            else if(dir==1){
                v[b].push_back(A[i]);
                b--;
                if(b<0){
                    dir=0;
                    b=1;
                }
            }
        }
    }
    string ans;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            ans+=v[i][j];
        }
    }
    return ans;
}
