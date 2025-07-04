class Solution {
public:
    int candy(vector<int>& ratings) {
        int vk; 
        int n = ratings.size();
        vector<int>pref(n , 1);
        vector<int>suff(n , 1);
        for(int i = 1;i<n; i++){
            if(ratings[i]>ratings[i-1]) {
             pref[i] = 1 + pref[i-1];
            }
        }
        for(int i = n-2;i>=0; i--){
            if(ratings[i]>ratings[i+1]) {
            suff[i] = 1 + suff[i+1];
            }
        }
      
        int ans = 0; 
        for(int i=0;i<n; i++) {
             ans += max(pref[i] , suff[i]);
        }
        return ans;
    }
};