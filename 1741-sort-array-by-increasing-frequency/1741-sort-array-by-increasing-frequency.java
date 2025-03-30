import java.util.*;
class Solution {
    public int[] frequencySort(int[] nums) {
        
        int len = nums.length;
        Map< Integer , Integer > map = new HashMap<>();

        for( int it : nums ) {
            map.put( it , map.getOrDefault( it , 0 ) + 1 );
        }

        List< Pair < Integer , Integer > >p = new ArrayList<>();

        for( Map.Entry<Integer , Integer> it: map.entrySet()) {
             int k = it.getKey();
             int v = it.getValue();

             p.add( new Pair<>(v , k ));
        }
        
        //p.sort( (a, b) -> a.getKey() - b.getKey());
        p.sort((a, b) -> (a.getKey() == b.getKey()) ? b.getValue() - a.getValue() : a.getKey() - b.getKey());
        int ans[] = new int[len];
        int i = 0;
        for( Pair<Integer , Integer> it : p) {
            int v = it.getKey();
            int k = it.getValue();

            int count = v;
            while( count -- > 0 ) {
               ans[i] = k;
               i++;
            }
        }

        return ans;

    }
}