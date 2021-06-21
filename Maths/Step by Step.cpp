int Solution::solve(int A) {
    int sum=0;
    int b=A*((A>0)-(A<0));
    if(b==1){
        return 1;
    }
    if(b==0){
        return 0;
    }
    for(int i=1;i<b;i++){
        sum=sum+i;
        if(sum==b){
            return i;
            break;
        }
        else if(sum>b){
            int n=i;
            if((sum-b)%2==0){
                return n; 
            }
            else
            {   sum=sum+n+1;
                if((sum-b)%2==0){
                    return n+1;
                }
                else
                {
                    sum=sum+n+2;
                    if((sum-b)%2==0)
                    {
                        return n+2;
                    }
                }
            }
            
        }
    }
}