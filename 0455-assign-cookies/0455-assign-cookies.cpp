class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int, vector<int>, greater<int>> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;


        for( int i = 0; i< g.size(); i ++ ) {
            pq1.push( g[i]);
        }  

        for( int i = 0; i< s.size(); i ++ ) {
            pq2.push( s[i]);
        }        
        
        int ans = 0;
        while( !pq1.empty() && !pq2.empty() ) {
            
            int t1 = pq1.top();
            int t2 = pq2.top();

            if( t2 >= t1 ) {

                ans++;
                pq1.pop();
                pq2.pop();

            }

            if(  t1 > t2 ) {
                pq2.pop();
            }



        }
         return ans;
    }
};