int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size();
    int m=A[0].size();
    int min=A[0][0];
    int max=A[n-1][m-1];
    int row;
    if(B>=min && B<=max){
        int rs=0;
        int re=n;
        int rmid;
        while(rs<=re){
            rmid=(rs+re)/2;
            if(A[rmid][0]<=B && A[rmid][m-1]>=B){
                row=rmid;
                break;
            }
            else if(A[rmid][0]>B){
                re=rmid-1;
            }else if(A[rmid][m-1]<B){
                rs=rmid+1;
            }
        }
        int cs=0, ce=m, cmid;
        while(cs<=ce){
            cmid=(cs+ce)/2;
            if(A[row][cmid]==B){
                return 1;
            }else if(A[row][cmid]<B) cs=cmid+1;
            else if(A[row][cmid]>B) ce=cmid-1;
        }
        if(cs>ce) return 0;
        
    }else return 0;
}
