class Solution {
public:
    int maxDifference(string s) {
        
        int n = s.length();
        
        map < char , int > mp;
        
        for( auto it : s ) {
            mp[it]++;
        }
        
        vector<int>start;
        
        for( auto it : mp ) {
           start.push_back(it.second);
        }
        sort(start.begin() , start.end() );
        int sz = start.size();
        
        int max_odd = -1, min_even = 101;  

        
        for (int it : start) {
            if (it % 2 == 0) {
                min_even = min(min_even, it);
            } else {
                max_odd = max(max_odd, it);
            }
        }

        // Maximum difference
        return max_odd - min_even;
        
     //   return abs( start[sz-1] - start[0]);
        
    }
};