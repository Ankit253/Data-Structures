int pivot_index(vector<int> A, int n){
    int s=0;
    int e=n;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(A[mid]<A[mid-1] && A[mid]<A[mid+1]){
            return mid;
        }
        else if(A[mid]>=A[0]){
            s=mid+1;    
        } 
        else if(A[mid]<A[0]){
            e=mid-1;   
        }
    }
    return -1;
}


int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int index=pivot_index(A,n);
    if(index!=-1){
        if(B>A[0]){
            int s=0;
            int e=index;
            int mid;
            while(s<=e){
                mid=s+(e-s)/2;
                if(A[mid]==B){
                    return mid;
                }
                else if(A[mid]>B){
                    e=mid-1;   
                }
                else if(A[mid]<B){
                    s=mid+1;
                }
                
            }
        }
        else{
            int s=index;
            int e=n;
            int mid;
            while(s<=e){
                mid=s+(e-s)/2;
                if(A[mid]==B){
                    return mid;
                }
                else if(A[mid]>B) e=mid-1;
                else if(A[mid]<B) s=mid+1;
            }
        }
    }
    else{
        int s=index;
        int e=n;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(A[mid]==B){
                return mid;
            }
            else if(A[mid]>B) e=mid-1;
            else if(A[mid]<B) s=mid+1;
        }        
    }
    return -1;

}
