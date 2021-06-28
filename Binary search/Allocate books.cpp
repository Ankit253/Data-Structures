bool isvalid(vector<int> A, int n, int B, int mid){
    int stud=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum>mid){
            stud+=1;
            sum=A[i];
        }
        if(stud>B) return false;
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    int n=A.size();
    if(B>n) return -1;
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        sum=sum+A[i];
        if(A[i]>max) max=A[i];
    }
    int result=-1;
    int s=max;
    int e=sum;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(isvalid(A,n,B,mid)){
            result=mid;
            e=mid-1;
        }else s=mid+1; 
    }
    return result;
}
