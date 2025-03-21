class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int a = 0 ;
        int b = 0;
        for(int i = 0; i < n; i++) {
            int c = max(a, nums[i] + b);
            b = a; a = c;
        }
        return a;
    }
};