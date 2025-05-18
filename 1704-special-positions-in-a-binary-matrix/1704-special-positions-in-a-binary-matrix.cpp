class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int tt = 0;
        int m = mat.size(), n = mat[0].size(), res = 0;
        vector<int> rows(m), cols(n);
        for(int i=0;i<m;i++) {
            tt++;
            for(int j=0;j<n;j++) {
                rows[i] += mat[i][j];
                cols[j] += mat[i][j];
                tt--;
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) 
                res += (rows[i] == 1 and cols[j] == 1 and mat[i][j]);
        }
        return res;
    }
};