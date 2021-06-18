int nextmissing(vector<int> b, int start, int end){
    int value=1;
    int i;
    for(i=start;i<end;i++){
        if(b[i]==value){
            value=value+1;
        }else if(b[i]==value-1){
            continue;
        }else{
            return value;
        }
    }
    if(i==end){
        return b[end-1]+1;
    }else{
        return value;
    }
}

int position(vector<int> c, int size, int num){
    int cnt=0;
    int pos;
    int i;
    for(i=0;i<size;i++){
        if(c[i]==num){
            cnt=1;
            pos=i;
            break;
        }
    }
    if(cnt==1){
        return pos;
    }
    else{
        return (size+size);
    }
    
}

int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    if(A[0]<0 && A[n-1]<=0){
        return 1;
    }
    if(A[0]<0 && A[n-1]>0){
        int num=1;
        int posofone=position(A,n,num);
        if(posofone==(n+n)){
            return 1;
        }else{
            return nextmissing(A,posofone,n);
        }
        
    }
    else if(A[0]>0){
        return nextmissing(A,0,n);
    }
}
