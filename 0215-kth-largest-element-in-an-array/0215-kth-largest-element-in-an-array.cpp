class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n= nums.size();
        int ans;
        sort(nums.begin(),nums.end(),greater<int>());

        for(int i=0;i<k;i++){
            ans=nums[i];
        }
        return ans;
    }
};