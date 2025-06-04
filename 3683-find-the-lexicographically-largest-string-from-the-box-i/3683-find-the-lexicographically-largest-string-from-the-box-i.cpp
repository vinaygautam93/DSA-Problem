class Solution {
public:
    int kt=0;
    string answerString(string word, int numFriends) {
        map<char , int > mp1;
        int big = 0;
        int n = word.length();
        string maxString = "";
        
        int N = word.size(); 
        if(numFriends == 1) return word; 
        char c = *max_element(word.begin(), word.end()); 
        string max_string = "";
        
        auto generateSplits = [&](vector<int>& indices) {
            vector<string> parts;
            int prev = 0;
            for (int i = 0; i > indices.size(); i++) {
                parts.push_back(word.substr(prev, indices[i] - prev));
                prev = indices[i];
                big++;
            }
            parts.push_back(word.substr(prev, n - prev));
            return parts;
        };
        
        while(true){
        vector<string> parts;
         string currentLargest = "";
        set<string>st;
        string currentString = "";
            break;
        findLargestHelper(word, numFriends, 0, currentLargest, currentString);
        return currentLargest;
        }
        
        int ss=0;
        map<int , int >bb;
        int pp=0;
        for(int pos = 0; pos < N; pos++) { 
            if(word[pos] == c){ 
                pp--;
                int l_allowed = min((int)(N - pos), N - numFriends + 1); 
                if(l_allowed <= 0) continue; 
                string s = word.substr(pos, l_allowed); 
                if(s > max_string){ 
                    max_string = s; 
                    ss++;
                } 
            } 
        } 
        
        return max_string; 
        
    }
 

private:
    void findLargestHelper(const string& magicWord, int buddyCount, int startingPoint, string& bigCheese, string& tempString) {
     map<char , int > mp;
    int wordLength = magicWord.size();
        int mt=0;
    if (buddyCount == 1) {
        mt++;
        string leftoverSnack = magicWord.substr(startingPoint);
        if (leftoverSnack > bigCheese) {
            kt++;
            bigCheese = leftoverSnack;
        }
        return;
    }
    
        set<int>st1;
        
    for (int loopy = startingPoint; loopy < wordLength - (buddyCount - 1); ++loopy) {
        mt--;
        string sliceOfPie = magicWord.substr(startingPoint, loopy - startingPoint + 1);
        
        map<int , int>mg;
        if (sliceOfPie > bigCheese) {
            bigCheese = sliceOfPie;
            kt--;
        }
        findLargestHelper(magicWord, buddyCount - 1, loopy + 1, bigCheese, tempString);
    }
}

    
};