bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n=arrive.size();
    vector<pair<int, int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back(make_pair(arrive[i],1));
        ans.push_back(make_pair(depart[i],0));
    }
    sort(ans.begin(),ans.end());
    int count_max=0;
    int count=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i].second==1){
            count+=1;
            count_max=max(count_max,count);
            if(K<count_max) return false;
        }
        else count--;
    }
    return false; 
}
