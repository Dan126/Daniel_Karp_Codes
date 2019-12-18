/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jsjf;

import java.util.Arrays;
import java.util.HashMap;
import websearch.URLWords;

/**
 *
 * @author User
 */
public class SearchEngine {

    private ArrayUnorderedList<URLWords> list = new ArrayUnorderedList<>();

    private int num = 10;

    public SearchEngine(ArrayUnorderedList<URLWords> list2) {
        list = list2;

    }

    HashMap<String, String> m = new HashMap<>();

    public String search(String query) {

        String[] letters;

        letters = query.split("\\s+");

        int sum = 0;

        PriorityQueue<String> queue = new PriorityQueue<>();
        
        Arrays.sort(letters);
        query = Arrays.toString(letters);

        if (m.containsKey(query)) {
            System.out.println("Query found in cache");
            return m.get(query);
        } else {
            
            System.out.println("Query not found in cache");
            
            for (URLWords website : list) {

                sum = 0;

                for (String term : letters) {

                    sum += website.getFrequency(term);

                }

                if (sum != 0) {

                    queue.addElement(website.getURLString(), sum * -1);
                }

            }

            String x = "";

            for (int i = 0; i < num; i++) {

                if (!queue.isEmpty()) {

                    x = x + queue.removeNext() + "\n";

                } else {

                }

            }
            
            m.put(query, x);

            return x;
        }
    }

}
