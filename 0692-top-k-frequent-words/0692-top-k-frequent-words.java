
import java.util.*;

class Solution {
    public List<String> topKFrequent(String[] words, int k) {

        Map<String, Integer> freq = new HashMap<>();

        // Count frequency
        for (String word : words) {
            freq.put(word, freq.getOrDefault(word, 0) + 1);
        }

        // Min heap
        PriorityQueue<String> pq = new PriorityQueue<>((a, b) -> {
            if (!freq.get(a).equals(freq.get(b))) {
                return freq.get(a) - freq.get(b);
            }
            return b.compareTo(a);
        });

        // Add words to heap
        for (String word : freq.keySet()) {
            pq.offer(word);

            if (pq.size() > k) {
                pq.poll();
            }
        }

        // Build result
        List<String> result = new ArrayList<>();

        while (!pq.isEmpty()) {
            result.add(pq.poll());
        }

        Collections.reverse(result);

        return result;
    }
}
