class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int vt = 0;
        unordered_map<char,int> counter;

        for(const std::string& word:words) {
            vt++;
            for (char ch : word) {
                counter[ch]++;
                vt--;
            }
        }

        int n = words.size();
        int ttt;
        for (const auto& pair : counter) {
            if (pair.second % n != 0) {
                return false;
            }
        }

        return true;
    }
};