class Solution {
public:
    string triangleType(vector<int>& sides) {
        
       map<int,int>m;
         /*   // string s;
       s[0]="equilateral";
        s[1]="isosceles";
        s[2]="scalene";
        s[3]="none"; 
         std::vector<std::string> s = {"equilateral", "isosceles", "scalene", "none"};
      //  int n1=s.length();
        int v=0;
        int k=0;
        for(auto it:m) {
            if(it.second==3)  {
                return s[0];
            } 
            else if(it.second==1) {
                 v++;
            } 
            else {
                k++;
            }
        } 
        if(v==3) {
            return s[2];
        } 
        else if(v==1 && k==1) {
            return s[1];
        } 
        else {
            return s[3];
        } */ 
        int a = sides[0], b = sides[1], c = sides[2];

   
        
    if (a + b > c && a + c > b && b + c > a)
    {
        /*nums[0] + nums[1] = 3 + 4 = 7, which is greater than nums[2] = 5.
nums[0] + nums[2] = 3 + 5 = 8,*/
       
        if (a == b && b == c)
        {
            return "equilateral";
        } else if (a == b || b == c || a == c) {
            return "isosceles";
        } else {
            return "scalene";
        }
    } else {
        return "none";
    }
        
    }
};