int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(A[mid]>A[mid-1] && A[mid]>A[mid+1]){
            break;
        }else if(A[mid]>A[mid-1] && A[mid]<A[mid+1]){
            s=mid+1;
        }else if(A[mid]<A[mid-1] && A[mid]>A[mid+1]){
            e=mid-1;
        }
    }
    
    if(B==A[mid]) return mid;
    if(B>A[mid]){
        return -1;
    }
    else{
        s=0;
        e=mid;
        int mid1;
        while(s<=e){
            mid1=s+(e-s)/2;
            if(B>A[mid1]) s=mid1+1;
            else if(B==A[mid1]) return mid1;
            else if(B<A[mid1]) e=mid1-1;
        }
        
        s=mid;
        e=n-1;
        int mid2;
        while(s<=e){
            mid2=s+(e-s)/2;
            if(B>A[mid2]) e=mid2-1;
            else if(B==A[mid2]) return mid2;
            else if(B<A[mid2]) s=mid2+1;
        }    
        
    }
    
    return -1;
    
}
