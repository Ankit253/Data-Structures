unsigned int Solution::reverse(unsigned int A) {
    unsigned int num=0;
    int i=0;
    while(A>0){
        num = num + pow(2,31-i)*(A%2);
        A = A/2;
        i++;
    }
    return num;
}