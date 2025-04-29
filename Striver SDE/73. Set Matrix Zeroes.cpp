
// Optimal Approach
// Time Complexity: O(N*M)
// Space Complexity: O(N+M)

class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            //optimal approach
            int n=matrix.size();
            int m=matrix[0].size();
            vector<bool> row(m);
            vector<bool> col(n);
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(matrix[i][j]==0){
                        col[j]=true;
                        row[i]=true;
                    }
                }
            }
    
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                if(row[i] || col[j])
                    matrix[i][j]=0;
                }
            }
        }
    };