class Solution {
    public int firstUniqChar(String s) {
        
        Map< Character , Integer > map = new LinkedHashMap<>();

        for( char ch : s.toCharArray()) {
            map.put( ch , map.getOrDefault(ch , 0 ) + 1);

        }
        char ans = '1' ;
        for( Map.Entry< Character , Integer > it : map.entrySet() ) {

            int val = it.getValue();
            if( val == 1 ) {
                ans = it.getKey();
                break;
            }
        }

        int idx;

        for( int i = 0; i < s.length(); i ++ ) {
            if( ans == s.charAt(i) ) {
               // return i;
                return i;
                
            }
        }
        return -1;
    }
}