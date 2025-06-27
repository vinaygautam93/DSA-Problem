class Solution {
public:
    bool isKSubsequence(const string& seq, const string& s, int k) {
        int i = 0, count = 0;
        for (char c : s) {
            if (c == seq[i]) {
                i++;
                if (i == seq.size()) {
                    count++;
                    i = 0;
                    if (count == k) return true;
                }
            }
        }
        return false;
    }

    string longestSubsequenceRepeatedK(string s, int k) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        vector<char> candidates;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (freq[c - 'a'] >= k) candidates.push_back(c);
        }

        queue<string> q;
        q.push("");
        string result = "";

        while (!q.empty()) {
            string curr = q.front();
            q.pop();

            for (char c : candidates) {
                string next = curr + c;
                if (isKSubsequence(next, s, k)) {
                    q.push(next);
                    if (next.size() > result.size() || (next.size() == result.size() && next > result)) {
                        result = next;
                    }
                }
            }
        }

        return result;
    }

};
