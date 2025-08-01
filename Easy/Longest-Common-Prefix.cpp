#include <iostream>
#include <vector>
using namespace std;
string find(vector<string> strs) {
    if (strs.empty()) return "";
      int min=0;
   for(string str:strs){
       if(min<=str.length()){
        min = str.length();
       }
   }
   string lcp;
for(int i=0;i<min;i++){
    char cmn = strs[0][i];
    for(int j=1;j<strs.size();j++){
        if(cmn != strs[j][i]){
            return lcp;
        }
    }
    lcp += cmn;
}
   return lcp;
}

int main(){
vector <string> strs = {"peppa","pepo","pepsi"};
cout << find(strs);
    return 0;
}