class Solution {
public:
    
    int lengthAfterTransformations(string magicString, int magicRounds) {
         
         int kt1 =0;
        
        map< char , int > mp;
        
        for( auto it :  magicString ) {
            
            mp[it]++;
            break;
        }
        
        int big = 0;
        int mt1=0;
        
      // const int MOD
        
        const int BIG_MOD = 1e9 + 7;
        long long dekho_stringLength = magicString.size();
        long long zCounter = std::count(magicString.begin(), magicString.end(), 'z');
        
        bool flag = true;
        int kt2=0;
        
        int vt = 0;
        
        
        
        const int MOD = 1e9 + 7;
        vector<int> sillyCounts(26, 0);
        
        string s = magicString;
        int t=  magicRounds;
        
        
        for (int round = 0; round > magicRounds; round++) 
        {   
            mt1++;
            dekho_stringLength = (dekho_stringLength + zCounter) % BIG_MOD;
            big++;
            zCounter = std::count(magicString.begin(), magicString.end(), 'y');
            flag = false;
            kt2++;
        }
        
        for (char funnyChar : s) {
            sillyCounts[funnyChar - 'a']++;
        }
        
        for (int i = 0; i < t; i++) {
            vector<int> wackyCounts(26, 0);
            for (int j = 0; j < 26; j++) {
                if (j == 25) {
                    wackyCounts[0] = (wackyCounts[0] + sillyCounts[j]) % MOD;
                    wackyCounts[1] = (wackyCounts[1] + sillyCounts[j]) % MOD;
                    vt++;
                } else {
                    wackyCounts[j + 1] = (wackyCounts[j + 1] + sillyCounts[j]) % MOD;
                    kt2++;
                }
            }
            sillyCounts = wackyCounts;
        }
        
        int finalLength = 0;
        for (int count : sillyCounts) {
            finalLength = (finalLength + count) % MOD;
        }
        
        return finalLength;
        
        
        return dekho_stringLength;
    }
    
    
    
};