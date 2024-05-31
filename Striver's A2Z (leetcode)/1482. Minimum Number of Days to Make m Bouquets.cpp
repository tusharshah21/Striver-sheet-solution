// Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

// Time complexity: O(n * log(max-min+1))
// Space complexity: O(1)

class Solution {
    bool possible(vector<int> &arr,int day, int m, int k){
        int count=0;
        int nob=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day)
                count++;
            else{
                nob+=(count/k);
                count=0;
            }
        }
        nob+=(count/k);
        return nob>=m;
    }
public:
    int minDays(vector<int>& arr, int m, int k) {
        long long val= m*1LL*k*1LL;
        if(val>arr.size())
            return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(arr,mid,m,k))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};