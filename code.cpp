#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int  binaryToDecimal(vector<int> vt){
        int ans = 0;
          for(int i= 0;i<vt.size();i++){
                 ans=ans*2+vt[i];
          }   
          return ans;
 
}
int main()
{
   vector<int> vt = {1,0,0};
   cout  << binaryToDecimal(vt);
  
     
}