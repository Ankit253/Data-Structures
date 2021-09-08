class Solution {
public:
    void find(string temp,set<string> &ans,int n, int l, int r){
        if(l==n && r==n){
            ans.insert(temp);
            return;
        }
        if(r>l) return;
        if(l>n || r>n){
            return;
        }
        
            temp+='(';
            find(temp,ans,n,l+1,r);
        temp.pop_back();
            temp+=')';
            find(temp,ans,n,l,r+1);
        return;
        
        
    }
    
    vector<string> generateParenthesis(int n) {
        set<string> ans;
        string temp;
        int l=0,r=0;
        find(temp,ans,n,l,r);
        vector<string> res;
        for(auto s: ans){
            res.push_back(s);
        }
        return res;
    }
};