int Solution::solve(int A) {
    long long int c=0;
    long long int p=0;
    if(A==0) return 0;
    while(pow(2,p)<=A) p++;
    p--;
    c+=p*pow(2,p)/2+(A-pow(2,p)+1)+solve(A-pow(2,p));
    c=c%1000000007;
    return c;
}