class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=1, count=0;
     while(i < nums.size()-1){   
    if((nums[i-1] + nums[i+1])*2 == (nums[i])){
        count++;
    }
    i++;
   }

return count;
    }
};