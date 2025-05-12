class Solution {
public:

    bool canForm(int num, multiset<int> digits) {
        while (num > 0) {
            int rem = num % 10;
            auto it = digits.find(rem);
            if (it == digits.end()) return false;
            digits.erase(it);
            num /= 10;
        }
        return true;
    }

    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> ansSet;
        int n = digits.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i == j || j == k || i == k) continue;

                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];

                    if (digits[i] == 0) continue;  
                    if (num % 2 != 0) continue;  

                    ansSet.insert(num);
                }
            }
        }

        vector<int> result(ansSet.begin(), ansSet.end());
        return result;
    }
};
