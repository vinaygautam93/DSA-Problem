import java.util.*;
class Solution {
    public String frequencySort(String s) {
        
        int len = s.length();

        Map< Character , Integer > map = new HashMap<>();

        for( char it : s.toCharArray() ) {
            map.put( it , map.getOrDefault( it , 0) + 1);
        }

        //List< Pair< Integer , Character > > list = new ArrayList<>();
         List<AbstractMap.SimpleEntry<Integer, Character>> list = new ArrayList<>();

        for( Map.Entry< Character , Integer > it : map.entrySet() ) {
              
              char k = it.getKey();
              int  v = it.getValue();
              
              list.add( new AbstractMap.SimpleEntry <>( v , k));
            
        }
        //list.sort();
        list.sort((a, b) -> b.getKey() - a.getKey());  // dec
        //list.sort((a, b) -> a.getKey() - b.getKey()); // asc
        StringBuilder ans = new StringBuilder("");
        for( AbstractMap.Entry<Integer, Character> it : list  ) {

              int count = it.getKey();
              char ch = it.getValue();
              while( count-- > 0 ) {
                  ans.append(ch);
              }

        }
        return ans.toString();
    }
}
