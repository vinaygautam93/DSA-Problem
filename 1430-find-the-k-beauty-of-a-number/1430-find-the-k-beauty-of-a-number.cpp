class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int hh = 0;
        string x = to_string(num);
       int n = x.length();
        int ans = 0;
        for(int i = 0;i<=(n-k);i++){
            hh--;
            if(stoi(x.substr(i,k)) != 0)
            if(num % stoi(x.substr(i,k)) == 0 )
                ans++;
                hh++;
        }
        return ans;
    }
};