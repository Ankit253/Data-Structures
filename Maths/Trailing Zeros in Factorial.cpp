int gcd(int x, int y){
    /*if(a==0) return b;                //1st way of finding GCD
    if(b==0) return a;
    if(a==b) return a;
    if(a>b){
        return gcd(a-b,a);
    }else return gcd(a,b-a);
}*/

/*int dividend=x>y?x:y;             //2nd way of finding GCD
    int divisor=x>y?y:x;
    while(divisor!=0){
        int rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    return dividend;
}*/
    if(x==0) return y;              //3rd way of findng GCD
    else return gcd(y%x,x);
}
int Solution::cpFact(int A, int B) {
    while (gcd(A, B) != 1) {
        A = A / gcd(A, B);   //removinig highest commono factor form A till we get GCD 1
    }
    return A;
}
