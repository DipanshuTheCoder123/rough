#include <iostream>
#include <deque>
using namespace  std;

 class Node{
    public:
    int data;
    Node* next;
    
    Node(int val )
    {   data =val;
        next= NULL;
    }


 };

 class Queue{
  
      Node* head;
      Node* tail;
  public:  
       Queue(){
        head=tail=NULL;
       }

       void push(int val )
       { 
        Node* node =new Node(val);
           if(head==NULL){
            head=tail=node;
           }else{
            tail->next=node;
            tail= node;
           }
       }

        void print(){
            Node* curr = head;

            while (curr!=NULL)
            {
                 cout <<  curr->data << "->"  ;
                 curr=curr->next;

            }
            cout << " NULL";
            
        }
        void pop()
        {
              if(head==NULL){
                  cout << "queue is empty";
                  }
                  else{
                    head=head->next;
                  }
         }


 };

 int main()
 {
  
     deque<int>  d1;
     d1.push_back(34);
     d1.push_back(12);

     cout  << d1.front()  << d1.back();
      

Queue q1;
q1.push(12);
q1.push(23);
q1.push(34);
q1.print();
q1.pop();
q1.print();
 }