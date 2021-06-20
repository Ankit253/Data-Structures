bool isprime(int n){
	int div=2;
	while(div<sqrt(n)){
		if(n%div==0){
			return false;
		}
		else{
			div+=1;
		}
	}
	if( div>sqrt(n)){
		return true;
	}
}



vector<int> Solution::primesum(int A) {
/*    int num=2;
    vector<int> prime;
    while(num<A){
        if(isprime(num)){
            prime.push_back(num);
        }
    }*/
    vector<int> ans;
    for(int i=2;i<A;i++){
        if(isprime(i) && isprime(A-i)){
            ans.push_back(i);ans.push_back(A-i);  
            break;
        }
    }return ans;
}