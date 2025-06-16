#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Create prefix minimum array
        vector<int> preMin;
        int mn = nums[0];
        preMin.push_back(mn);

        for (int i = 1; i < n; i++) {
            mn = min(nums[i], mn);
            preMin.push_back(mn);
        }

        // Step 2: Create postfix maximum array
        vector<int> postMax;
        int mx = nums[n - 1];
        postMax.push_back(mx);

        for (int i = n - 2; i >= 0; i--) {
            mx = max(nums[i], mx);
            postMax.push_back(mx);
        }

        reverse(postMax.begin(), postMax.end());

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
