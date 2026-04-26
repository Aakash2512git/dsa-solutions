class Solution {
public:
    bool find(int i, int j, vector<vector<char>>& grid,
              vector<vector<int>>& vis, char cycle, int i_, int j_) {
        
        int m = grid.size();
        int n = grid[0].size();

        if(i < 0 || j < 0 || i >= m || j >= n) return false;
        if(grid[i][j] != cycle) return false;

        if(vis[i][j] != 0) return true;

        vis[i][j] = 1;

        bool ans = false;

        if(!(i + 1 == i_ && j == j_)) // checking next one is not parent
            ans |= find(i + 1, j, grid, vis, cycle, i, j);

        if(!(i - 1 == i_ && j == j_))
            ans |= find(i - 1, j, grid, vis, cycle, i, j);

        if(!(i == i_ && j + 1 == j_))
            ans |= find(i, j + 1, grid, vis, cycle, i, j);

        if(!(i == i_ && j - 1 == j_))
            ans |= find(i, j - 1, grid, vis, cycle, i, j);

        return ans;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(vis[i][j] == 0) {
                    if(find(i, j, grid, vis, grid[i][j], -1, -1))
                        return true;
                }
            }
        }

        return false;
    }
};