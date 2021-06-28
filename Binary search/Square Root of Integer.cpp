int Solution::sqrt(int A) {
    int s=0;
    int e=A;
    int mid;
    int ans;
    while(s<=e){
        mid=(s+e)/2;
        if(pow(mid,2)==A){
            ans=mid;
            break;
        }else if(pow(mid,2)<A){
            s=mid+1;
            ans=mid;
        }else if(pow(mid,2)>A){
            e=mid-1;
        }
    }return floor(ans);
}
