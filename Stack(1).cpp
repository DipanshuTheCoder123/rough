#include <iostream>
using namespace std;

 // using array

class Stack {
public:
    int arr[5];      // fixed size
    int top= -1;
     
    void  push(int val ){
          if(top == 4){
            cout << "stack overflow\n";
            return;
          }
        arr[++top]=val;
    }
    

    // pop with underflow check
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);   // overflow

    while (!st.empty()) {
        cout << st.peek() << " ";
        st.pop();
    }

    st.pop();   // underflow

    return 0;
}
