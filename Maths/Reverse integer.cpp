int Solution::reverse(int A){
    if(A>INT_MAX || A<INT_MIN) return 0;
    long long int n1=A;
    if(A<0){
        n1=-1*A;
    }
    long long int num=0;
    while(n1){
        num=num*10+(n1%10);
        n1/=10;
    }
    
    if(num>INT_MAX)return 0;
    if(A<0) return -1*num;
    else return num;
}