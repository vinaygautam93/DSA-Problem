class Solution {
public:
    char kthCharacter(int k) {
        map<int , int > mp;
        string word = "a";
        int mt=0;
        int n=word.length();
        
        int nt=0;
        while (word.length() < k ) {
            
            mt++;
            string newWord = "";
            
            for (auto vt : word)
            {
                if (vt == 'z') 
                {
                    nt++;
                    newWord += 'a';
                } 
                else 
                {
                    nt++;
                    newWord += vt + 1;
                }
            }
            
            int copy=0;
            word += newWord;
            
        }
        
        return word[k - 1];
        
    }
};