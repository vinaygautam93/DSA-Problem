class Solution {
public:
    int reverseDegree(string s) {
        
        vector<char> charVactor = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g', 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
         
        vector<int>charVal = { 26 , 25, 24 , 23 , 22 , 21 , 20, 19 , 18, 17, 16, 15, 14 , 13 , 12 , 11 , 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 };
        
        int ans = 0;
        for( int j =0; j < s.length(); j++ ) {

            char ch = s[j];

            for(int i = 0; i < charVactor.size() ; i++  ) {

                if( ch == charVactor[i]) {
                    int pro = charVal[i] * ( j + 1);
                    ans +=pro;
                    break;
                }
            }
        } 
        return ans ;
    }
};