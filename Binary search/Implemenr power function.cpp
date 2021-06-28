int Solution::pow(int x, int n, int d) {
    if(d==1) return 0;
    long long ans=1,y=x%d;
    while(n>0){
        if(n&1)
         ans=((ans)*y)%d;
        y=(y*y)%d;
        if(y<0) y+=d;
        n=n>>1;
    }
    if(ans<0){
        ans=(d-abs(ans)%d);
        return ans;
    }
    return ans%d;
}
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

