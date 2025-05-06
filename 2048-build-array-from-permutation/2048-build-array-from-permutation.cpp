class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int>vg;

        for(int i=0;i<n;i++) {
            vg.push_back(nums[nums[i]]);
        }

        return vg;
    }
};