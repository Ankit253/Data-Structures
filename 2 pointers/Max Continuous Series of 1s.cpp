vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size();
    int count=0;
    vector<int> ans;
    int len=INT_MIN;
    int j=0;
    pair<int,int> p;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count++;
            // ans.push_back(i);
        }
        if(count>B){
            while(count>B && j<i){
                if(A[j]==0){
                    count--;
                }
                j++;
            }
        }
        if(i-j+1>len){
            p={j,i};
            len=i-j+1;
        }
    }
    for(int i=p.first;i<=p.second;i++){
            ans.push_back(i);
        
    }return ans;
}
