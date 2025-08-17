#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    // int output = 0;
    //     for(int i=0;i<static_cast<int>(prices.size()-1);i++){
    //         for(int j=i+1;j<static_cast<int>(prices.size());j++ ){
    //             if((prices[j] - prices[i]) > output){
    //                 output = prices[j] - prices[i];
    //             }
    //         }
    //     }
    //     return output;
    int buy = prices[0];
    int n = prices.size();
    int profit = 0;
    for(int i=0;i<n;i++){
       if(buy > prices[i]){
        buy = prices[i];
       }
       else{
         if(profit < prices[i] -buy){
            profit =prices[i] -buy;
         }
       }
       
    }
    return profit;
}
int main(){
vector <int> prices = {7,1,5,3,6,4};
cout << maxProfit(prices);
    return 0;
}