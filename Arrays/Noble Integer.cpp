/*vector<int> removeDuplicates(int arr[], int n)
{
  
    int i;
  
    // Initialise a set
    // to store the array values
    set<int> s;
  
    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {
  
        // insert into set
        s.insert(arr[i]);
    }
    
    vector<int> v;
    v.assign(s.begin(), s.end());
  
 return v;
}
*/



int Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int> b;
    b=A;
    //removeduplicate(A,n);
    sort(b.begin(), b.end());
    if(b[n-1]==0 ){
        return 1;
    }
    
    if(b[n-1]<0){
        return -1;
    }
    int count=0;
    for (int i=n-1; i>=0;i--){
        count+=1;
        if(b[i]!=b[i+1] and b[i]==(n-i-1)){
            return 1;
        }
    }
    if(count=n-1){
        return -1;
    }
}
