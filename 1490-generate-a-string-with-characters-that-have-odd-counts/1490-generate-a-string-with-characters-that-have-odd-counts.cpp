class Solution {
public:
    string generateTheString(int n) {

        if( n == 1 ) {
            return "a";
        }
        string ans = "";
       if( n % 2 ==0 ) {
        while( n-- > 1 ) {
            ans +='a';
        }
        ans+='b';
        return ans;
       }
       


       while( n-- > 2 ) {
            ans +='a';
        }
        ans+='b';
        ans+='c';
        return ans;
       

    }
};