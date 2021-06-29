int Solution::power(string A) {
    long long int N = A.length();
    long long int num = A[0]-'0';
    for(int i = 1; i<N; i++) num = (num*10)+(A[i]-'0');
    if(num == 1) return 0;
    if((num & (num-1)) == 0) return 1;
    return 0;
}
