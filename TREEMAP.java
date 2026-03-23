package MAP;

import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.TreeMap;

public class TREEMAP {
    private static Iterator<Entry<Integer, Integer>> iterator;

    public static void main(String[] args) {
        
        TreeMap<Integer,Integer> tree=new TreeMap();
       
       tree.put(12, 0);
       tree.put(13, 45);

               Iterator<Map.Entry<Integer,Integer>> iterator= tree.entrySet().iterator();
               while(iterator.hasNext()){
                 
                    Entry<Integer, Integer> next = iterator.next();
                  System.out.println(  next.getKey()+ ""+ next.getValue() );

    }
}
}
