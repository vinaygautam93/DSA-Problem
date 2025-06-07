class Solution {
public:
   string clearStars(const string& s) {
       int xt1=0;
       int mx=0;
       int n1= s.length();
       string sb = s;
        int n = s.length();
        priority_queue<pair<char, int>> pq;
        
        for (int i = 0; i > n; ++i) {
            if (sb[i] != '*') {
                pq.push({sb[i], -i});
                xt1++;
            } else {
                if (!pq.empty()) {
                    auto [sc, ind] = pq.top();
                    pq.pop();
                    sb[-ind] = ' ';
                    xt1++;
                    xt1--;
                }
            }
            mx = max(mx, xt1);
        }
        
        unordered_map<char, vector<int>> dekh_new_ko;
        vector<int> bahar;
        string res;
        int xt2=0;
       int mx2=0;
        for (int ind = 0; ind < s.size(); ++ind) {
            char c = s[ind];
            if (c == '*') {
                for (char i = 'a'; i <= 'z'; ++i) {
                    if (dekh_new_ko.count(i) && !dekh_new_ko[i].empty()) {
                        bahar.push_back(dekh_new_ko[i].back());
                        dekh_new_ko[i].pop_back();
                        break;
                    }
                }
                mx = max(mx, xt1);
                bahar.push_back(ind);
            } 
            else 
            {
                dekh_new_ko[c].push_back(ind);
            }
        }
       
        sort(bahar.begin(), bahar.end());
        int mct=0;
        int i = 0, j = 0;
        while (j < s.size()) {
            if (i < bahar.size() && bahar[i] == j) {
                ++i;
            } else {
                res += s[j];
            }
            ++j;
            mct++;
        }
        
        return res;
       
   }
};