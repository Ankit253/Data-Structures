int Solution::maxArr(vector<int> &A) {


    int n = A.size();
    int max1 = INT_MIN, min1 = INT_MAX;
    int max2 = INT_MIN, min2 = INT_MAX;
  
    for (int i = 0; i < n; i++) {
  
        // Updating max and min variables
        // as described in algorithm.
        max1 = max(max1, A[i] + i);
        min1 = min(min1, A[i] + i);
        max2 = max(max2, A[i] - i);
        min2 = min(min2, A[i] - i);
    }
  
    // Calculating maximum absolute difference.
    return max(max1 - min1, max2 - min2);
  

        /*for(int j=i+1;j<A.size();j++){
            int v=A[i]-A[j];
            int z=(i-j);
            currdiff=v*((v>0)-(v<0))+z*((z>0)-(z<0));
            if (currdiff>maxdiff){
                maxdiff=currdiff;
            }
        }*/
}
