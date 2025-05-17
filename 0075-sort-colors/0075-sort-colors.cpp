class Solution {
public:
    void sortColors(vector<int>& arr) {
      
       // return nums;
        
   /*     int i, j; 
        int n=arr.size();
    for (i = 0; i < n - 1; i++) {
         for (j = 0; j < n - i - 1; j++)  {
            if (arr[j] > arr[j + 1])  {
                swap(arr[j], arr[j + 1]);   
            }
         }
    } */

       int n=arr.size();
       int l=0;
       int h=n-1;
       int mid=0;
        for(int i=0;i<n;i++) {
           if(arr[mid]==0) {
             swap(arr[l],arr[mid]);
             mid++;
             l++;
             
           } 
            else if(arr[mid]==1) {
                mid++;
            } 
            else {
                swap(arr[h],arr[mid]);
                h--;
             
            }
        }    
    
    }
};