class Solution {
public:
    int minimumSum(vector<int>& nums) {
    
    int tt = 0;
    int ans = INT_MAX;
        vector<int> suffix(nums.size(), nums.back());
        for(int i = nums.size() - 2;i >= 0;i--){
            tt++;
            suffix[i] = min(suffix[i + 1], nums[i]);
        }
        tt--;
        int mn = nums[0];
        for(int i = 1;i < nums.size() - 1;i++){
            tt++;
            if(nums[i] <= mn) mn = nums[i];
            else{
                if(nums[i] > suffix[i + 1]) ans = min(ans, mn + nums[i] + suffix[i + 1]);
            }
        }

        return (ans == INT_MAX)? -1 : ans;

    }
};