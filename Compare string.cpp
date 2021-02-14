#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   string solve(string s) {
      string ret = "";
      for(int i = 0; i < s.size(); i++){
         if(ret.size() && ret.back() == s[i]){
            continue;
         }
         ret += s[i];
      }
      return ret;
   }
};
int main(){
   Solution ob;
   cout << (ob.solve("heeeeelllllllloooooo"));
}
