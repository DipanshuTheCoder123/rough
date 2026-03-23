package MAP;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;

import start.second;

public class HASHMAP {
    public static void main(String[] args) {
        
        HashMap<Integer,Integer> map=new HashMap<>();//default 16
        map.put(1 ,45);
        map.put(2, 23);

          Integer string = map.get(5);
          System.out.println(string);
           Integer orDefault = map.getOrDefault(5, 0);
             System.out.println(orDefault);
        for(Map.Entry me :map.entrySet()){
        
          System.out.println(me.getKey()+"-----"+me.getValue());

        }
       
        

           Integer arr[]={1,2,5,6,9,8};
           Arrays.sort(arr,(a,b) ->a-b);
System.out.println(Arrays.toString(arr));
 Integer newarr[][]={{1,2},{4,6}};
           Arrays.sort(newarr,Comparator.comparing(a ->a[0]));
    }
}
