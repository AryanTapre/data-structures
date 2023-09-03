// Important Gas Station Problem : LeetCode 134

#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int balance = 0;
    int deficit = 0;
    int startIndex = 0;

    for(int i=0; i<gas.size(); i++) {
        balance += gas[i] - cost[i];
        if(balance < 0) {
            deficit += balance;
            balance = 0;
            startIndex = i + 1;
        }
    }

    if(balance + deficit >= 0) {
        return startIndex;
    }
    else {
        return -1;
    }
}

int main() {
 
    vector<int> gas = {2,3,4};
    vector<int> cost = {3,4,3};

    cout<<canCompleteCircuit(gas,cost);

return 0;
}