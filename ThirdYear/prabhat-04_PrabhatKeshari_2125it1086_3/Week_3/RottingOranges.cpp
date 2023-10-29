class Solution {
private:
    void bfs(vector<vector<int>>& grid, vector<vector<bool>>& vis, int &time) {
        int m = grid.size(), n = grid[0].size();
        queue<vector<int>> q;
        for(int k = 0; k < m; k++) {
            for(int l = 0; l < n; l++) {
                if(grid[k][l] == 2) {
                    vis[k][l] = true;
                    q.push({k, l});
                }
            }
        }
        if(q.empty()) {
            time = 1;
            return;
        }

        while(!q.empty()) {
            int k = q.size();
            time++;
            while(k--) {
                vector<int> temp = q.front();
                q.pop();
                int i = temp[0], j = temp[1];
                grid[i][j] = 2;
                if(i-1 >= 0 && !vis[i-1][j] && grid[i-1][j] == 1) {
                    vis[i-1][j] = true;
                    q.push({i-1, j});
                }
                if(i+1 < m && !vis[i+1][j] && grid[i+1][j] == 1) {
                    vis[i+1][j] = true;
                    q.push({i+1, j});
                }
                if(j-1 >= 0 && !vis[i][j-1] && grid[i][j-1] == 1) {
                    vis[i][j-1] = true;
                    q.push({i, j-1});
                }
                if(j+1 < n && !vis[i][j+1] && grid[i][j+1] == 1) {
                    vis[i][j+1] = true;
                    q.push({i, j+1});
                }
            }
        }
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), time = 0;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        bfs(grid, vis, time);
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) return -1;
            }
        }
        return time - 1;
    }
};