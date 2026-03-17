#include <iostream>
using namespace std;

class Node {
public:
     int data;
     Node* next;
     Node* prev;

 Node(int data){
     this->data = data;
     next =prev =NULL;   
 }
};
   
 class DoublyL{
  
    Node* head;
    Node*  tail;
  public:
    DoublyL(){
        head = tail =NULL;
    }
    
 };
  



int main(){
  DoublyL a;
    

     return  0 ;

}