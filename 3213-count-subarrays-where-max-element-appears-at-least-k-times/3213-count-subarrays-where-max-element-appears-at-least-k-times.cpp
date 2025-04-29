class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n= nums.size();
        
        unordered_map<int,int>mp;
        int bada=*max_element(begin(nums),end(nums));

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
                if( it.first == bada  &&   it.second >= k) { 
                   v++;  
                   int count = n-j; 
                   mx+=count;
                   break;
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
      //  return mx;   

      int i=0;
      int j=0;
      long long vin=0;

      while(j<n) {
         if(nums[j]== bada) {
            mx++;

         } 

         while( mx>= k)  {
           vin += n-j;
           if(nums[i]== bada) {
            mx--;

         }  
         i++;
         }
         j++;
      } 
      return vin;
    }
};