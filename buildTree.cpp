#include <iostream>
#include <unordered_set>
#include <math.h>
#include <vector>
using namespace std;

class Node{
public: 
    int data;
    Node* left;
    Node* right;
  
    Node(int val){
      data = val;
      left= right =NULL;
    } 
};

class BuildTree{
 public :
    int idx=-1;  
     Node * build(vector<int> vt){
           idx++;
            if(idx>=vt.size() || vt[idx]==-1)return NULL;

           Node*  root = new Node(vt[idx]);
          root->left =  build(vt);
          root->right =  build(vt);           
        
          return root;
     }

};

int main()
{
    vector<int> tree = {1, 2, 3, 4, 5, -1, 6};
  BuildTree bt;
 Node * root =  bt.build(tree);
      cout  << root->data;
  
     


}