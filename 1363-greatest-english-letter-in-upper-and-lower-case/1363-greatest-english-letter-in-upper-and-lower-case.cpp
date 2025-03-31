class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<int> st;

        for (char ch : s) {
            st.insert(ch);
        }

        char best = 0;
        for (char ch : s) {
            int asc1 = ch + 32;
            int asc2 = ch - 32;

            if (st.count(asc1) && isupper(ch)) {
                best = max(best, ch);
            }
            if (st.count(asc2) && islower(ch)) {
                best = max(best, (char)asc2);
            }
        }

        return best ? string(1, best) : "";
    }
};
