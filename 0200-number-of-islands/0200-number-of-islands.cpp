class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(), c = grid[0].size();
        int cnt=0;
        vector<vector<int>>visited(r,vector<int>(c,0));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    cnt++;
                    bfs(i, j, visited, grid);
                }
            }
        }
        return cnt;
    }

    void bfs(int r, int c, vector<vector<int>>& visited, vector<vector<char>>& grid) {
        queue<pair<int, int>> q;
        q.push({r, c});
        visited[r][c] = 1;
        int rows[4] = {-1, 0, 1, 0};
        int cols[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            int row_val = q.front().first;
            int col_val = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int rv = row_val + rows[i];
                int cv = col_val + cols[i];

                if (rv >= 0 && rv < grid.size() && cv >= 0 &&
                    cv < grid[0].size() && !visited[rv][cv] &&
                    grid[rv][cv] == '1') {
                    visited[rv][cv] = 1;
                    q.push({rv, cv});
                }
            }
        }
    }
};