#include <iostream>
using namespace std;

class Node{
    

public: 
     int data;
     Node* next;

     Node(int val){
        data =val;
        next = NULL;
    }
};

class  List 
{
     Node *head;
     Node *tail;
public :
    List(){
        head = tail = NULL;
    }
public:
    void push_front(int val){
        Node* newnode  =new Node(val); //dynamic
        // Node newnode1(val);//static

        if(head == NULL &&tail ==NULL){
            head = tail = newnode;
        }else{
           newnode->next=head; //this is same as (*newnode).next=head;
           head=newnode;
        }
    }
      void pop_front(){
    
        if(head == NULL &&tail ==NULL){
             cout << "not pop";
             return ;
        }else{
            Node *temp =head;
             head= head->next;
             temp->next=NULL;
             delete temp;
        }
   if(head == NULL){   // list became empty
        tail = NULL;

        }
    }

    void push_back(int val){
        Node* newnode  =new Node(val); //dynamic
        // Node newnode1(val);//static

        if(head == NULL &&tail ==NULL){
            head = tail = newnode;
        }else{
           tail->next=newnode;
           tail=newnode;
        }
    }


    void pop_back(){
        if(head==NULL)cout << "list is empty\n";
        Node *temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;


    }

    void print()
    {
        Node *temp = head;

        while(temp!=NULL){
            cout << temp->data << " " ;
            temp=temp->next;
        }
    }

    Node*  reverse(){
      Node* prev= NULL;
      Node* curr =head;
      Node* next =NULL;

      while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

      }
      return prev;
    }
     
};
  
  

int  main()
{
   
   List l1;
   l1.push_front(1);
   l1.push_front(4);
   l1.push_front(5);
   l1.print();
  
  Node* temp =   l1.reverse();

  while(temp!=NULL){
    cout << temp->data;
    temp = temp->next;
  }
};