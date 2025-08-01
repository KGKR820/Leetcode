#include <iostream>
#include <vector>
#include <algorithm>
void nextPermutation(std::vector<int>& nums) {
    int n = static_cast<int>(nums.size());
    if(n<=1){
        return ;
    }
    else if(std::is_sorted(nums.begin(),nums.end())){
       std::swap(nums[n-1], nums[n-2]);
    }
    
    }
int main(){
std::vector <int> arr = {1,2,3};
nextPermutation(arr);
for(int i:arr){
    std::cout << i << " ";
}
    return 0;
}