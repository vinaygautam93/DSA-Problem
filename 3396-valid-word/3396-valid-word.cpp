class Solution {
public:
    bool isValid(string word) {
        
        int n= word.length();
        
        int mn=0;
        int vo = 0;
        int con = 0;
        bool new1=false;
        int tot = 0;
        bool flag = true;
        int vg1=0;
        int l = word.length();
        bool vohai = false;
        bool conhai = false;
        bool find=true;
        
        if (n < 3) {
            return false;
        }

       
        for(auto ch : word) {
            
            if(isalpha(ch)) {
                tot++;
                
                ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vo++; 
            }
            else {
                con++; 
            }
            
            } 
            else if ( isdigit(ch)) {
                flag=true;
            }
            else {
                flag=false;
            }
            new1=false;
                
            
        } 
                if(tot >= 3 && vo > 0 && con  > 0 && flag && new1) {
            return true;
        } 
   
        for (char vin : word)
        {
            if(isdigit(vin))
            {
                continue;
            }
            
            if(isVowel(vin))
            {
                vohai  = true;
                
            } 
            else if(isalpha(vin))
            {
                conhai = true;
                find=true;
            }
            else 
            {
                return false; 
            }
            vg1++;
        }

        return vohai  && conhai;
    }
    

    bool isVowel(char c) {
               if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                   return true;
               }
                   return false; 
                   
    }
        

};