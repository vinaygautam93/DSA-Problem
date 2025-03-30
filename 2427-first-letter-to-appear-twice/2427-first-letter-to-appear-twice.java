class Solution {
    public char repeatedCharacter(String s) {
        Map<Character, Integer> map = new LinkedHashMap<>();
        char mt = '\0';
        for (char ch : s.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
            int val = map.get(ch);// find freq
            if( val == 2 ) {
                return ch;
            }
        }
        return mt;
        // for (Map.Entry<Character, Integer> entry : map.entrySet()) {
        //     if (entry.getValue() >= 2) {  
        //         char ch = entry.getKey();
                
        //         for (int i = 0; i < s.length(); i++) {
        //             if (s.charAt(i) == ch) {
        //                 for (int j = i + 1; j < s.length(); j++) {
        //                     if (s.charAt(j) == ch) {
        //                         return ch;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }

        // return '\0';
        // int len = s.length();

        // Map< Character , Integer > map = new LinkedHashMap<>();

        // for( char it : s.toCharArray()) {
        //     map.put( it , map.getOrDefault( it ,0 ) + 1 );
        // }
        
        // char ans = '\0';
        // for ( Map.Entry< Character , Integer > it : map.entrySet()) {
        //     int fre = it.getValue();
        //     if( fre >= 2 ) {
        //        char ch = it.getKey();
        //        for(int i = 0; i < s.length() ; i ++ ) {
        //            if( ch == s.charAt(i)) {
        //                if( s.charAt(i+1) == ch) {
        //                 return ch;
        //                }
        //                else {
        //                 break;
        //                }
        //            }
        //        }
        //     }
        // }
        // return ans;
    }
}