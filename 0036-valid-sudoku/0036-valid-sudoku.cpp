class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int big = 0;
        unordered_set<string> st;
        unordered_set<int>st1;
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        if (board[i][j] == '.') {
            big++;
          continue;
        }
        string str(1, board[i][j]);
        if (!st.insert(str + "#row" + to_string(i)).second ||
            !st.insert(str + "#col" + to_string(j)).second ||
            !st.insert(str + "#box" + to_string(i / 3) + to_string(j / 3)).second) {
          return 0;
        }
      }
    }
    return 1;
    }
};