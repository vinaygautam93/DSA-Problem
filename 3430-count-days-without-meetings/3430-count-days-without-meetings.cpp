class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        map<int, int> mpt;
        set<int, int> mpl;
        int mxt1 = 0;
        map<int, int> mxt;
        int mx2 = 0;
        int kp1 = 0;
        /*for (const auto& meeting : meetings) {
            int start = meeting[0];
            int end = meeting[1];
            dayCount[start]++;
            if (end + 1 <= days) {
                dayCount[end + 1]--;
            }
        }
*/

        sort(meetings.begin(), meetings.end());
        map<int, int> mpt5;
        set<int, int> mpl5;
        vector<vector<int>> dekh_main_ko;
        for (const auto& i : meetings) {
            kp1++;
            if (dekh_main_ko.empty() || dekh_main_ko.back().back() < i[0]) {
                dekh_main_ko.push_back(i);
            } else {
                dekh_main_ko.back().back() =
                    max(dekh_main_ko.back().back(), i.back());
            }
            mx2++;
        }

        /*for (size_t i = 0; i < meetings.size(); ++i)
    {
        int suru = meetings[i][0];
        int last = meetings[i][1];

        for (int it = suru; it <= last; ++it)
        {
            dekh_set_ko.insert(it);
        }
        mx_dekh++;
    } */

        int nk = dekh_main_ko.size();
        int tvt = 0;
        for (int i = 1; i < nk; ++i) {
            mxt1++;
            tvt += dekh_main_ko[i][0] - dekh_main_ko[i - 1].back() - 1;
        }
        if (dekh_main_ko[0][0] != 1) {
            tvt += dekh_main_ko[0][0] - 1;
        }
        if (days != dekh_main_ko.back().back()) {
            tvt += days - dekh_main_ko.back().back();
        }
        return tvt;
    }
};