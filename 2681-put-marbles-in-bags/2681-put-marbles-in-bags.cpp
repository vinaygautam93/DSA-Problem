class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
         vector<long long> store;
        int v=weights.size();
        for(int i=1;i<weights.size();i++)
        {
            store.push_back(weights[i]+weights[i-1]);
        }
        sort(store.begin(),store.end());
        int n=store.size();
        long long mini=0;
        for(int i=0;i<k-1;i++)
        {
            mini+= store[i];
        }

        long long maxi=0;
        for(int i=0;i<k-1;i++)
        {
            maxi+= store[n-1-i];
        }
        return maxi - mini;
    }
};