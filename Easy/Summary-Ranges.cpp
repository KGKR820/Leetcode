#include <iostream>
#include <vector>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
    int j =0;
    vector <string> output;
    int b=0;
    if(nums.empty()){
        return output;
    }
        for(int i=1;i<nums.size();i++){
            if(nums[j] + 1  !=  nums[i]){
                if(j != b){
                    output.push_back(to_string(nums[b]) + "->" + to_string(nums[j]));
                }
                else{
                    output.push_back(to_string(nums[b]));
                }
                b = j+1;
                }
                j++;
            }
            if(b == j){
                output.push_back(to_string(nums[b]));
            }
            else{
                output.push_back(to_string(nums[b]) + "->" + to_string(nums[j]));
            }
        return output;
    }
int main(){

    return 0;
}