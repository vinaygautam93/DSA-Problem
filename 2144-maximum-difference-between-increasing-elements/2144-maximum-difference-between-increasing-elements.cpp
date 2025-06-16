class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>preMin;
        vector<int>postMax;


        int mn = nums[0];
        preMin.push_back(mn);

        for( int i = 1; i < n; i++ ) {
            mn = min( nums[i] , mn);
            preMin.push_back(mn);
        }
        int mx = nums[n-1];
        postMax.push_back(mx);
        for( int i = n-2; i >=0; i--) {
            mx = max( nums[i] , mx);
            postMax.push_back(mx);
        }
        reverse( postMax.begin(), postMax.end());
        int diff = 0;
        for(int i = 0; i < n; i++ ) {
               
            int tempDiff = postMax[i] - preMin[i];
            diff = max( diff , tempDiff);

        }
        // if( diff == 0) {
        //     return -1;
        // }
        //  return diff;
        return (diff == 0) ? -1 : diff;

        



    }
};
