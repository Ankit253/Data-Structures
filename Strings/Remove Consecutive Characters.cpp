string Solution::solve(string A, int B) {
    int n=A.size();
    int count=1;
    string a;
    char next=A[0];
    char curr;
    int i;
    for(i=0;i<n;i++){
        curr=next;
        next=A[i+1];
        if(curr!=next){
            if(count!=B){
                a+=A[i];
            }
            count=1;
            continue;
        }else{
            count++;
        }
    }return a;
}
