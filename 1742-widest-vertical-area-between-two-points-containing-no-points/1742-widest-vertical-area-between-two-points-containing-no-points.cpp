class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int vt = 0;
        sort(points.begin(),points.end());
        int diff =0;
        for(int i =1;i<points.size();i++){
            diff = max(diff,points[i][0]-points[i-1][0]);
            vt++;
        }
        vt--;
        return diff;
    }
};