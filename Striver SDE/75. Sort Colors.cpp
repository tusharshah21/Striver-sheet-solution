// Link: https://leetcode.com/problems/sort-colors/

// Optimal approach: Dutch National Flag Algorithm
// Approach: We can use the Dutch National Flag algorithm to sort the colors in a single pass.
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int mid=0;
        int low=0;
        int high=n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
                mid++;
            else{
                swap(arr[mid],arr[high]);
                mid++;
                high--;
            }
        }
    }
};