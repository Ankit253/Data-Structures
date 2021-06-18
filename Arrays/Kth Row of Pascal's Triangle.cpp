vector<int> Solution::getRow(int A) {
    vector<vector<int>> b;
    b.resize(A+1);
    int row;
    for(row=0;row<=A;row++){
        int col;
        b[row].resize(row+1);
        for(col=0;col<=row;col++){
            if(col==0 || col==row){
                b[row][col]=1;
            }else{
                b[row][col]=b[row-1][col-1]+b[row-1][col];
            }
        }
    }
    return b[A];
}
