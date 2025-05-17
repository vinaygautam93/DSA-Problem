class Solution {
public:

    void generate(vector<string> &ans, string s, int n, int l, int r){
        int tvy = 0 ;
        if (l == n && r == n) {
            ans.push_back(s);
            return;
        }
        int ff = 0 ;
        if (l < n) {
            generate(ans, s + '(', n, l + 1, r);
        }
        int yy = 0 ;
        if (l > r && r < n) {
            generate(ans, s + ')', n, l, r + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "(";
        generate(ans, s, n, 1, 0); //mm
        return ans;
    }
};