class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int vvt;
        unordered_set<int> uniqueNums(nums.begin(), nums.end());
    int k = uniqueNums.size();
    int n = nums.size();
    int res = 0;
    int left = 0;
    unordered_map<int, int> windowCounts;

    for (int right = 0; right < n; right++) {
        int num = nums[right];
        windowCounts[num]++;

        while (windowCounts.size() == k) {
            res += n - right;

            int leftNum = nums[left];
            windowCounts[leftNum]--;
            if (windowCounts[leftNum] == 0) {
                windowCounts.erase(leftNum);
            }

            left++;
        }
    }

    return res;

    }
};