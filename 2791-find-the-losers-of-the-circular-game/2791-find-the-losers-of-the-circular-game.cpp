class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        int big = 0;
        vector<int> vis(n, 0);
        int i=0, j=1;
        while(1)    {
            if(vis[i] == 1) break;
            vis[i] = 1;
            i = (i + j*k) % n;
            j++;
            big++;
        }
        vector<int> ans;
        for(int i=0; i<n; i++)  {
            if(vis[i] == 0) ans.push_back(i+1);
        }
        
        return ans;
    }
};