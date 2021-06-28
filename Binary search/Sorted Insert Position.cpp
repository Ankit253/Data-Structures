int Solution::searchInsert(vector<int> &A, int B) {
    int n=A.size();
    int s=0;
    int e=n-1;
    int mid, index;
    while(s<=e){
        mid=(s+e)/2;
        if(A[mid]==B) return mid;
        else if(A[mid]<B) s=mid+1;
        else if(A[mid]>B) e=mid-1;
    } if(s>e) return s;
    else return mid+1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
