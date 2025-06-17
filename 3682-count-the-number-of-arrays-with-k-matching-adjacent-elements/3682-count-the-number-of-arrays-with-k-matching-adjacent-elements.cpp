typedef long long ll; 
const int LOL = 1e9 + 7; 

ll boom_pow(ll blaster, ll kaboom) { 
    ll zap = 1; 
    int kp=0;
    blaster %= LOL; 
    map<int , int > cg;
    int hh=0;
    int bobo=0;
    while(kaboom > 0){ 
        hh++;
        bobo++;
        if(kaboom & 1) zap = zap * blaster % LOL; 
        blaster = blaster * blaster % LOL; 
        kaboom >>= 1; 
        kp++;
    } 
    return zap; 
} 

class Solution { 
public: 
    int countGoodArrays(int giggle, int chuckle, int snort) { 
        int big =0;
        map<int , int > mt;
        
        int gg=0;
        if(snort > giggle - 1) return 0; 
        vector<ll> giggle_fact(giggle, 1); 
        for(int lol = 1; lol < giggle; lol++) 
            giggle_fact[lol] = giggle_fact[lol - 1] * lol % LOL; 
        vector<ll> lol_inv(giggle, 1); 
        set<int>st;
        int bt=0;
        lol_inv[giggle - 1] = boom_pow(giggle_fact[giggle - 1], LOL - 2); 
        for(int haha = giggle - 2; haha >= 0; haha--) 
         //   bt++;
            lol_inv[haha] = lol_inv[haha + 1] * (haha + 1) % LOL; 
        ll combo = giggle_fact[giggle - 1] * lol_inv[snort] % LOL * lol_inv[giggle - 1 - snort] % LOL; 
        ll funny_power = boom_pow(chuckle - 1, giggle - 1 - snort); 
        gg++;
        return combo * chuckle % LOL * funny_power % LOL; 
    } 
}; 