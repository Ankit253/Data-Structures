int Solution::solve(int A, vector<int> &B) {
    int sum1=0;
    for(int i=0;i<A;i++){
        sum1+=B[i];
    }
    if(sum1%3!=0) return 0;
    sum1=sum1/3;
    
    int x=0;
    vector<int> prefix;
    for(int i=0;i<A;i++){
        x+=B[i];
        if(x==sum1) prefix.push_back(i);
    }
    
    x=0;
    vector<int> sufix;
    for(int i=A-1;i>0;i--){
        x+=B[i];
        if(x==sum1) sufix.push_back(i);
    }
    
    int count=0;
    for(int i=0;i<prefix.size();i++){
        for(int j=0;j<sufix.size();j++){
            x=0; int n=0;
            for(int z=prefix[i]+1;z<sufix[j];z++){
                x+=B[z];
                n=1;
                
            }
            if(x==sum1 && n==1){
                count++;
            }
        }
    }
    return count;
}
