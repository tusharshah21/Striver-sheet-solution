// Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

// Time complexity: O(log n)
// Space complexity: O(1)

class Solution {
public:
    bool search(vector<int>& arr, int key) {
        int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key) return true;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=key && key<=arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else{
            if(arr[mid]<=key && key<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return false;
    }
};