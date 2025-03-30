class Solution {
    public int mostFrequentEven(int[] nums) {
        
        
        int len = nums.length;

        Map< Integer , Integer > map = new TreeMap<>();
        
        int mx = 0;
        for( int  it : nums ) {
            if( it % 2 == 0) {
            map.put( it , map.getOrDefault( it , 0 ) + 1);
            int v = map.get(it);

            mx = Math.max( v , mx );
            }
        }

        for( Map.Entry< Integer , Integer > it : map.entrySet() ) {
            int freq= it.getValue();
            int k = it.getKey();
            if( freq == mx &&  k % 2==0 ) {
                return it.getKey();
            }
        }
        return -1;

      
    }
}