/*
LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
*/
#include<bits/stdc++.h>
using namespace std;
 
    void maxProfitFinder(vector<int>& prices,int i, int minPrice, int& maxProfit) {
        if(i == prices.size()) {
            return;
        }

        if(prices[i]<minPrice) {
            minPrice = prices[i];
        }
        if((prices[i]-minPrice) > maxProfit) {
            maxProfit = prices[i]-minPrice;
        }

        maxProfitFinder(prices,i+1,minPrice,maxProfit);
    }

    //TC: O(N)
    //SC: 
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit;
    }

int main() {
 
    vector<int> price = {3,2,7,8,10,5};
    cout<<maxProfit(price);

return (0);
}