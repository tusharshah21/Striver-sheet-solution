

class Solution {
    int atMost(vector<int>& nums, int k){
        int l=0,r=0,sum=0,count=0;
        if(k<0) return 0;
        while(r<nums.size()){
            sum+=(nums[r]%2);
            while(sum>k){
                sum-=(nums[l]%2);
                l=l+1;
            }
            count+=r-l+1;
            r=r+1;
        }
        return count;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};