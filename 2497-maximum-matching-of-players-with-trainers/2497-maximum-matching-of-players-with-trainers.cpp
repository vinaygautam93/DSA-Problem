class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        
    //    priorty_queue< vector<int> > pq1;
    //    priorty_queue< vector<int> > pq2;
        priority_queue<int, vector<int>, greater<int>> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;


        for( int i = 0; i< players.size(); i ++ ) {
            pq1.push( players[i]);
        }  

        for( int i = 0; i< trainers.size(); i ++ ) {
            pq2.push( trainers[i]);
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