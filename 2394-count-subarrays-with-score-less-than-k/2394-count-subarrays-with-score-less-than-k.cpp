class Solution {
public:
    long long countSubarrays(vector<int>& a, long long k) {
        int vv;
        const int n = a.size();
        long count = 0;
        long s = a[0];
        for (int i = 0, w = 1;;) {
            if (s * w < k) {
                count += w++;
                if (++i == n) break;
                s += a[i];
            } else {
                s -= a[i + 1 - w--];
            }
        }
        return count;
    }
};