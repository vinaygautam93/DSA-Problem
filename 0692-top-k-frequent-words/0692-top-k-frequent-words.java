import java.util.*;
class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        
        int len = words.length;
        Map< String , Integer > map = new HashMap<>();

        for( String it : words ) {
            map.put( it , map.getOrDefault( it , 0) + 1);
        }

        List < Pair < Integer , String > > p = new ArrayList<>();
        
        for( Map.Entry< String , Integer >  it : map.entrySet() ) {
            String ke = it.getKey();
            int v = it.getValue();

            p.add( new Pair<>(v , ke ));
        }
        int sz = map.size();

        // p.sort( (a , b) -> a.getKey() - b.getKey() );
        p.sort((a, b) -> {
            if (!a.getKey().equals(b.getKey())) {
                return b.getKey() - a.getKey(); 
            }
            return a.getValue().compareTo(b.getValue()); 
        });
        List < String > ans = new ArrayList<>();
        
        int skip = sz - k;
        for( Pair < Integer , String > it : p  ) {
            
            
            int v = it.getKey();
            String ke = it.getValue();
            
            if( k > 0) {
            ans.add(ke);
            k--;
            }
            else {
                break;
            }
            
        }
        //Collections.sort(ans);
        return ans;


    }
}