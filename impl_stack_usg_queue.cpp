#include <iostream>
#include <queue>
using namespace std;

// Implement stack using two queue ;


class MyStack  {
    public :
     queue<int> q1;
     queue<int> q2;

    void push(int val ){
       while(!q1.empty()){
           int val = q1.front();
           q1.pop();
           q2.push(val);
       }  
       q1.push(val);

       while(!q2.empty()){
           int val = q2.front();
           q2.pop();
           q1.push(val);
       }

    }
    int top()
    {  
       if (!q1.empty())
            return q1.front();
        return -1;
    }
    void pop()
    {
        q1.pop();
        
    }
    bool empty()
    {
         return q1.size()==0;
    }

};

int main()
{
   
     MyStack  st;
     st.push(1);
     st.push(2); 
     st.pop();
     while(!st.empty()){
        cout  << st.top();
        st.pop();
     };


}