double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int a=A.size();
    int b=B.size();
    if(a>b) return findMedianSortedArrays(B,A);
    int partitiona, partitionb;
    int s=0;
    int e=a;
    while(s<=e){
        partitiona=(s+e)/2;
        partitionb=(a+b+1)/2-partitiona;
        double maxlefta = (partitiona == 0) ? INT_MIN : A[partitiona-1]; //edge cases if 	
        double minrighta = (partitiona == a) ? INT_MAX : A[partitiona];
        double maxleftb = (partitionb == 0) ? INT_MIN : B[partitionb-1];
        double minrightb = (partitionb == b) ? INT_MAX : B[partitionb];
        if(maxlefta<=minrightb && maxleftb<=minrighta){
            if((a+b)%2==0) return (max(maxlefta,maxleftb)+min(minrighta,minrightb))/2.0;
            else return max(maxlefta,maxleftb);
        } else if(maxlefta>minrightb){
            e=partitiona-1;
        }else s=partitiona+1;
    }
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
