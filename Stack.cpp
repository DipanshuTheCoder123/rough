#include <iostream>
#include <vector>
using namespace std;

 // using vector 
 
 class Stack {
  public:
    vector <int> vt;
     
    void push(int val ){
       vt.push_back(val);
    }  
    
     void pop(){
        vt.pop_back();
     }

     int  top()
     {
        return vt[vt.size()-1];
     }
 
     bool empty()
     {
        return vt.size()==0;
     }

 };
 
 int main()
 { 

     

    Stack st;
    st.push(12);
    st.push(90);

       while (!st.empty())
       {
           cout  << st.top();
            st.pop();

       }
       
     
     
    return  0 ; 
 }