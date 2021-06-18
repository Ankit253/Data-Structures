/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &A, Interval newInterval) {
   vector<Interval> ans;
   int n=A.size();
   int s=newInterval.start;
   int e=newInterval.end;
   bool check=false;
   if(e<s){ 
       int temp=e;
       e=s;
       s=temp;
   }
   for(int i=0;i<n;i++){
       if(A[i].end<s) ans.push_back(A[i]);
       else if(A[i].start>e){ 
           if(!check) ans.push_back({s,e});
           ans.push_back(A[i]);
           check=true;
       
       }else{
           s=min(A[i].start,s);
           e=max(A[i].end, e);
       }
   }
   if(check==false)  ans.push_back({s,e});
   return ans;
}
