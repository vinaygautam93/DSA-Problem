class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         
        int n=nums.size(); 
        multiset<int> vin(nums.begin() + 1, nums.end()); 

        int bada = nums[0]; 
        long long mx3 = 0; 
      
        for (int i = 1; i < nums.size() - 1; i++) { 
           
            vin.erase(vin.find(nums[i]));           
            int last= (*(--vin.end())); 
            mx3 = max(mx3, (bada - nums[i]) * 1ll * last) ;     
            bada = max(bada, nums[i]);  
        } 


         return mx3;

    }
};