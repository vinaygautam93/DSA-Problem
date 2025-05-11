class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int gj; 
        int n = arr.size();
        if (n < 3) return false; // return if there are less than 3
        int count = 0;
        for (auto it = arr.begin(); it != arr.end(); ++it) {
            if (*it % 2 != 0) {
                count++;
                if (count == 3) {
                    return true;  
                }
            } else {
                count = 0;
            }
        }
        return false;
    }
};