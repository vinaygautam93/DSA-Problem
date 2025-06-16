#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Create prefix minimum array
        vector<int> preMin(n);
        preMin[0] = nums[0];
        for (int i = 1; i < n; i++) {
            preMin[i] = min(nums[i], preMin[i - 1]);
        }

        // Step 2: Create postfix maximum array
        vector<int> postMax(n);
        postMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            postMax[i] = max(nums[i], postMax[i + 1]);
        }

        // Step 3: Calculate maximum difference
        int diff = 0;
        for (int i = 0; i < n; i++) {
            int tempDiff = postMax[i] - preMin[i];
            diff = max(diff, tempDiff);
        }

        // Step 4: Return result
        return (diff == 0) ? -1 : diff;
    }
};
