package Abstract;

import java.util.ArrayList;
import java.util.List;

  interface Abstract123 {
 
    
     public  abstract    void demo();
    
    
 } 
  

    
  

public class First implements Abstract123{
    @Override
    public void demo() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'demo'");
    }
    void display()
    
    {
        System.out.println("dis");
    }
    
    public static void main(String[] args) {
          Abstract123 st=new First();
          st.display();
         
    }
}
