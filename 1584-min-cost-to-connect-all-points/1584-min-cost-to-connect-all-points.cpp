class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n= points.size();
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j)
                    continue;
                int weight = abs(points[i][0] - points[j][0]) + abs(points[i][1]- points[j][1]);
                adj[i].push_back({j, weight});
                adj[j].push_back({i,weight});
            }
        }
        vector<int> key(n,INT_MAX);
        vector<bool> mst(n,false);
    
        // priority queue // min dist , idx 
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

        // for the source 
        key[0]=0;
        pq.push({0,0});

        while(!pq.empty()){
            int u= pq.top().second; // min weight 
            pq.pop();
            // mark mst
            mst[u] = true;
            // visiting all the adj of u 
            for(auto itr:adj[u]){
                int val = itr.first;
                int wght= itr.second;
                if(mst[val] == false && wght < key[val]){
                    key[val] = wght;
                    pq.push({key[val], val}); // weight, node
                }
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+= key[i];
        }
        return ans;
    }
private:
    int find(int x){
        if(x==fa[x]) return x;
        return fa[x] = find(fa[x]);
    }
    vector<int> fa;
};