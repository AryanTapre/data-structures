/*
leetcode: https://leetcode.com/problems/minimum-cost-for-tickets/
*/

#include<vector>
#include<iostream>
using namespace std;
 
    int costTicketHelper(vector<int>& days, vector<int>& costs,int i) {
        // base case
        if(i >= days.size()) return 0;
        

        // 1 day pass taken
        int cost1 = costs[0] + costTicketHelper(days,costs,i+1);

        // 7 day pass taken
        int passEndDay = days[i]+7-1;
        int j=i;
        while(j<days.size() && days[j] <= passEndDay) {
            j++;
        }
        int cost7 = costs[1] + costTicketHelper(days,costs,j);

        // 30 day pass taken
        passEndDay = days[i]+30-1;
        j=i;
        while(j<days.size() && days[j] <= passEndDay) {
            j++;
        }
        int cost30 = costs[2] + costTicketHelper(days,costs,j);

        int oneMini = min(cost1,cost7);
        int ans = min(oneMini,cost30);

        return ans;

    }
        // TC: O(3^N)
        // SC: O(N)
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return costTicketHelper(days,costs,0);
    }

int main() {

    vector<int> days = {2,5};
    vector<int> cost = {2,7,15};
    cout<<mincostTickets(days,cost);

return (0);
}