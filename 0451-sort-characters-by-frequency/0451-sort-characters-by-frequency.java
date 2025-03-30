import java.util.*;
//import javafx.util.Pair;

class Solution {
    public String frequencySort(String s) {
        
        Map<Character, Integer> map = new HashMap<>();

        // Count frequency of each character
        for (char it : s.toCharArray()) {
            map.put(it, map.getOrDefault(it, 0) + 1);
        }

        // Using List of Pairs to store (frequency, character)
        List<Pair<Integer, Character>> list = new ArrayList<>();

        for (Map.Entry<Character, Integer> it : map.entrySet()) {
            list.add(new Pair<>(it.getValue(), it.getKey()));
        }

        // Sort in descending order based on frequency
        list.sort((a, b) -> b.getKey() - a.getKey());

        // Construct the result string
        StringBuilder ans = new StringBuilder();
        for (Pair<Integer, Character> it : list) {
            int count = it.getKey();
            char ch = it.getValue();
            while (count-- > 0) {
                ans.append(ch);
            }
        }
        return ans.toString();
    }
}
