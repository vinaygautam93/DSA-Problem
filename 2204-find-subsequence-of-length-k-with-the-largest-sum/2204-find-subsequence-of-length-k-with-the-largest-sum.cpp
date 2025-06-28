class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue< pair< int , int >  > pq;
        int n = nums.size();
        for( int i = 0; i < n ; i ++) {
            pq.push( {nums[i] , i});
        }
        vector< pair< int , int > > ans;
        while(k--) {
           //ans += pq.top();
           ans.push_back( { pq.top().second , pq.top().first } );
           pq.pop();
        }
        sort( ans.begin() , ans.end());

        vector< int > finalAns;

        for( auto it : ans ) {
            finalAns.push_back(it.second);
        }
        return finalAns;

    }
};