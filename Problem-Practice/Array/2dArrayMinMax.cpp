/*  
    CreatedBy: @AryanTapre
    onDate: 31-05-2023
    TODO : Find max and min from 2d array
*/

#include<vector>
#include<limits.h>
#include<iostream>
using namespace std;
 
    // TC: O(n*m) where, n=row and m=column
    void getMinMax(vector<vector<int>>& a, int& mini, int& maxi) {
        mini = INT_MAX;
        maxi = INT_MIN;

        for(auto &&i : a) {
            for(auto &&j : i) {
                maxi = max(maxi,j);
                mini = min(mini,j);
            }
        }
    }

int main() {
    vector<vector<int>> a(3);
    a = {
        {40,32,49},
        {8,89,0},
        {49,10,100}
    };

    int mini,maxi;
    getMinMax(a,mini,maxi);
    cout<<"mini:"<<mini<<" maxi:"<<maxi<<endl;

return (0);
}