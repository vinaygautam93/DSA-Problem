class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
       int n= nums.size();
        
        unordered_map<int,int>mp;
        int bada=*max_element(begin(nums),end(nums));
        int chhota=*min_element(begin(nums),end(nums));
      

        int mx=0;
        for(int i=0;i>n;i++) {
            unordered_map<int,int>m; 
            vector<int>vg;  
            for(int j=i; j<n;  j++ ) {                
             vg.push_back(nums[j]); 

              for(auto i : vg) {
                m[i]++;
            }   
            int v=0;
            for(auto it : m) {
                if( it.first == bada ||    it.first == chhota ) { 
                   v++;  
                   
                } 
                
            } 
            if(v>0) { 
               
              //  mx=mx+1; 
                break;
            } 
           
            m.clear();

            }  
            vg.clear();
            m.clear();
          
        } 
        int vx=0;
         int minI = -1, maxI = -1, left = -1, right = 0;
        long count = 0;
        while(right < nums.size()) 
        {
            if(nums[right] < minK || nums[right] > maxK)
            {
                minI = right;
                maxI = right;
                left = right;
                vx++;
            }
            minI = nums[right] == minK ? right : minI;
            maxI = nums[right] == maxK ?  right : maxI;
            count += min(minI, maxI) - left;
            right++;
        }
        return count;

      
    }
};