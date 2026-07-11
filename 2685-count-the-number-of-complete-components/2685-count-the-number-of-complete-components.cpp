class Solution {
public:

void dfs(int node, unordered_map<int, vector<int>> &mp, int &v, int &e, vector<int> &vis) {
    vis[node] = 1;
    v++;  
    e += mp[node].size();  
    for (auto &i : mp[node]) {
        if (!vis[i]) {
            dfs(i, mp, v, e, vis);
        }
    }
}
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
         unordered_map<int, vector<int>> mp;

    for (auto &i : edges) {
        int u = i[0], v = i[1];
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    vector<int> vis(n, 0);
    int result = 0;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            int v = 0, e = 0;
            dfs(i, mp, v, e, vis);

            if (v * (v - 1) / 2 == e / 2) {
                result++;
            }
        }
    }

    return result;
    }
};