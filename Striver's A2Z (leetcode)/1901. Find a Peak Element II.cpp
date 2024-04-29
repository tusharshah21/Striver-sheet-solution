// Link: https://leetcode.com/problems/find-a-peak-element-ii/

// Time complexity: O( log(m*n) )
// Space complexity: O(1)

class Solution
{
    int findMaxIndex(vector<vector<int>> &g, int n, int m, int col)
    {
        int maxVal = -1;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (g[i][col] > maxVal)
            {
                maxVal = g[i][col];
                index = i;
            }
        }
        return index;
    }

public:
    vector<int> findPeakGrid(vector<vector<int>> &g)
    {
        int n = g.size();
        int m = g[0].size();
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int maxRowIndex = findMaxIndex(g, n, m, mid);
            int left = mid - 1 >= 0 ? g[maxRowIndex][mid - 1] : -1;
            int right = mid + 1 < m ? g[maxRowIndex][mid + 1] : -1;
            if (g[maxRowIndex][mid] > left && g[maxRowIndex][mid] > right)
                return {maxRowIndex, mid};
            else if (g[maxRowIndex][mid] < left)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return {-1, -1};
    }
};