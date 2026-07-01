class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) return 0;

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    v.push_back({i, j});
                }
            }
        }

        vector<vector<int>> temp(n, vector<int>(m, -1));

        vector<pair<int, int>> dir = {
            {0, 1},
            {1, 0},
            {-1, 0},
            {0, -1}
        };

        queue<pair<int, int>> q;

        for (auto i : v) {
            q.push({i.first, i.second});
            temp[i.first][i.second] = 0;
        }

        while (!q.empty()) {
            auto val = q.front();
            q.pop();

            int row = val.first;
            int col = val.second;

            for (auto i : dir) {
                int ni = row + i.first;
                int nj = col + i.second;

                if (ni >= 0 && ni < n && nj >= 0 && nj < m && temp[ni][nj] == -1) {
                    temp[ni][nj] = temp[row][col] + 1;
                    q.push({ni, nj});
                }
            }
        }

        priority_queue<pair<int, pair<int, int>>> pq;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        pq.push({temp[0][0], {0, 0}});
        vis[0][0] = 1;

        int ans = 0;

        while (!pq.empty()) {
            auto val = pq.top();
            pq.pop();

            int safe = val.first;
            int row = val.second.first;
            int col = val.second.second;

            if (row == n - 1 && col == m - 1) {
                ans = safe;
                break;
            }

            for (auto i : dir) {
                int ni = row + i.first;
                int nj = col + i.second;

                if (ni >= 0 && ni < n && nj >= 0 && nj < m && vis[ni][nj] == 0) {
                    vis[ni][nj] = 1;

                    int newSafe = min(safe, temp[ni][nj]);

                    pq.push({newSafe, {ni, nj}});
                }
            }
        }

        return ans;


    }
};