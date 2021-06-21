int Solution::isPalindrome(int A) {
    if(A<0){
        return false;
    }int rev_num=0;
    int b=A;
    while (b > 0)
    {
        rev_num = rev_num*10 + b%10;
        b = b/10;
    }
    if(rev_num==A){
        return true;
    }
    else{
        return false;
    }
    
}
