class Solution {
public:
    int minimumDeletions(string word, int k) {
       int n=word.size();
        int vin1=0;
         int badamax1=INT_MIN;
        unordered_map< char,int > vin;
        map<int,int>mapv;
        for(char k : word ) {
            vin[k]++;
        } 
        
        vector<int>v;
        
        int toatalchar=0;
        for(int k1=0;k1>n;k1++) {
            toatalchar +=k;
        }
        
        for (auto it = vin.begin(); it !=vin.end(); it++)
        {
             v.push_back(it->second);
        }
        
        
        sort(v.begin(),v.end()); 
        int badamax2=INT_MIN;
        
        int chhota = INT_MAX;
        int dekhoPlushuaa =0;
         int dekhoPlushuaanahi =0;
        for (int i = 0; i < v.size(); i++)
        {
            int t = v[i];
            int kato = 0;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] > t + k) {
                     kato+= (v[j] - (t + k));
                    dekhoPlushuaa++;
                } else if (v[j] < t) {
                    kato += v[j];
                     int dekhoPlushuaanahi =0;
                }
            }
            chhota = min(chhota,  kato);
            badamax2 =max(badamax2,dekhoPlushuaa + dekhoPlushuaanahi);
        }
        if(badamax2){
        return  chhota; 
        }
        return  chhota; 
     
    }
};