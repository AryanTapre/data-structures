/*
leetcode: 121
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
    void maxProfitFinder(vector<int>& prices,int i, int& minPrice, int& maxProfit) {
        if(i >= prices.size()) return;
        if(prices[i] < minPrice) minPrice = prices[i];
        if(prices[i]-minPrice > maxProfit) maxProfit = prices[i]-minPrice;
        
        maxProfitFinder(prices,i+1,minPrice,maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit; 
    }

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout<<"max profit : "<<maxProfit(prices);
 
return (0);
}