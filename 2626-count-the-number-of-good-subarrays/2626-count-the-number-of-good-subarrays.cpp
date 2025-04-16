class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mp;

        int low = 0;

        long long res = 0;
        long long samePair = 0;

        for (int high = 0; high < n; high++) {
            // add this to current window
            // before adding check how many samePair it will become
            samePair += mp[nums[high]];
            mp[nums[high]]++;

            // to shrink the window from left every time the condition is satisied
            while (low <= high && samePair >= k) {
                // [low...high] is valid
                res += (n - high);
                // update samePair
                mp[nums[low]]--;
                samePair -= mp[nums[low]];
                low++;
            }
        }

        return res;
    }
};