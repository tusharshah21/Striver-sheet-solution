// Link : https://leetcode.com/problems/flood-fill/

// Time complexity: O(mn)
// Space complexity: O(1)


class Solution {
    void filling(vector<vector<int>>& image, int i, int j, int n, int m, int currcolor, int color){
        if(i<0 || i>=n || j<0 || j>=m || image[i][j]==color || image[i][j]!=currcolor)
            return;
        image[i][j]=color;
        filling(image,i+1,j,n,m,currcolor,color);
        filling(image,i-1,j,n,m,currcolor,color);
        filling(image,i,j+1,n,m,currcolor,color);
        filling(image,i,j-1,n,m,currcolor,color);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int currcolor=image[sr][sc];
        filling(image,sr,sc,n,m,currcolor,color);
        return image;
    }
};