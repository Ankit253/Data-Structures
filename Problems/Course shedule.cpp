class Solution {
public:
    bool check(int i,vector<int> adj[], int vis[], int dfsvis[]){
        vis[i]=1;
        dfsvis[i]=1;
        for(auto it: adj[i]){
            if(!vis[it]){
                if(check(it,adj,vis,dfsvis)){
                    return true;
                }
            }else if(dfsvis[it]){
                return true;
            }
        }
        dfsvis[i]=0;
        return false;
    }
    
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        int n=prerequisites.size();
        for(int i=0;i<n;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        int vis[numCourses];
        memset(vis,0,sizeof vis);
        int dfsvis[numCourses];
        memset(dfsvis,0,sizeof dfsvis);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(check(i,adj,vis,dfsvis)){
                    return false;
                }
            }
        }
        return true;
        
    }
};