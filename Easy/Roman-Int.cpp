#include <iostream>
#include <unordered_map>
using namespace std;
int romanTonum(string s){
    unordered_map <char,int> set;
    set['I'] = 1;
    set['V'] = 5;
    set['X'] = 10;
    set['L'] = 50;
    set['C'] = 100;
    set['D'] = 500;
    set['M'] = 1000;
    int value =0;
   for (int i = 0; i < s.size(); ++i) {
        if (i + 1 < s.size() && set[s[i]] < set[s[i + 1]]) {
            value -= set[s[i]];
        } else {
            value += set[s[i]];
        }
    }
    return value;
}
int main (){
int value = romanTonum("MCMXCIV");
cout << value;
    return 0;
}