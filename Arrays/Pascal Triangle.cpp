vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> b;
    b.resize(A);
    int i;
    if(A==0){
        return b;
    }
    for(i=0;i<A;i++){
        int col;
        b[i].resize(i+1);
        for(col=0;col<=i;col++){
            if(col==0 || col==i){
                b[i][col]=1;
            }else{
                b[i][col]=(b[i-1][col]+b[i-1][col-1]);
            }
        }
    }return b;
}
