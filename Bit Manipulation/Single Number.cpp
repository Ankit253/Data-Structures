int Solution::singleNumber(const vector<int> &A) {
    int result=0;
for(int i=0;i<=A.size()-1;i++)
{
result=result^A[i];
}
return result;
}
