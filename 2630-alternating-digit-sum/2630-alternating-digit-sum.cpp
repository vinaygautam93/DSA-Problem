#import<bits/stdc++.h>
class Solution {
public:
    int alternateDigitSum(int n) {
        
        stack < int > st;
        while( n > 0 ) {
            int rem = n % 10;
            st.push(rem);
            n= n / 10;
        }
        int ans  =0;
        bool flag1 = true;
        bool flag2 = false;

        while( !st.empty() ) {
            if( flag1 ) {
                flag1 = false;
                flag2 = true;
                
                ans += st.top();
                st.pop();
            }
            else if( flag2 ) {
                flag2 = false;
                flag1 = true;
                ans-= st.top();
                st.pop();
            }
        }
        return ans;

    }
};