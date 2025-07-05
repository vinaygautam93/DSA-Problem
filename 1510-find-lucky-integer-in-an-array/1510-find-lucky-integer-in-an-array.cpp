class Solution {
public:
    int findLucky(vector<int>& arr) {
         
        int n = arr.size();
        map< int , int > mp;

        for( auto it : arr ) {
            mp[it]++;
        }

        int mx = -1;

        for( auto it : mp ) {
            int f = it.first;
            int sec = it.second;

            if( f == sec  ) {
                mx = max( mx , f);
            }
        }
        return mx;
    }
};