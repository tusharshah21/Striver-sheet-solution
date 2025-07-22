// Link: https://leetcode.com/problems/set-matrix-zeroes/

// Optimal Approach : Array Mark
// Time Complexity: O(N*M)
// Space Complexity: O(N+M)

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // optimal approach
        int n = matrix.size();
        int m = matrix[0].size();
        vector<bool> row(m);
        vector<bool> col(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    col[j] = true;
                    row[i] = true;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] || col[j])
                    matrix[i][j] = 0;
            }
        }
    }
};


//Optimal approach 2: Mark in Place
// Time Complexity: O(N*M)
// Space Complexity: O(1)

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        // adjusting first row and column
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }
        // changing rest of the elements according to it
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] != 0)
                {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0)
                        matrix[i][j] = 0;
                }
            }
        }
        // changing the first row
        if (col0 == 0)
        {
            for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
        }
        // changint the first column
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
                matrix[0][j] = 0;
        }
    }
};