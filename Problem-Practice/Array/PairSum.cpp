/*
    To find a pair who's addition equals to given "sum",
    createdBy:@AryanTapre
    onDate:28-05-2023
*/

/*
    TimeComplexity : O(n^2)
    SpaceComplexity : O(1)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
    bool getPairSum(vector<int>& val,int& sum) {
        for(int i=0; i<val.size()-1; i++) {

            int p = val.size()-1;
            int eleRequired = sum - val[i];
            if(!(eleRequired < 0)) {
                while (p > i)
                {
                    if(val[p] == eleRequired) {
                        cout<<"pair:"<<val[i]<<","<<val[p];
                        return true;
                    }
                    p--;
                }
            }
        }
        return false;
    }

    bool getTripletSum(vector<int>& val,int& sum) {
        for(int i=0; i<val.size()-1; i++) {

            int tempSum = sum - val[i];
            int p = val.size()-1;
            int eleRequired = tempSum - val[i+1];
            if(!(eleRequired < 0)) {
                while (p > i)
                {
                    if(val[p] == eleRequired) {
                        cout<<"Triplets:"<<val[i]<<","<<val[i+1]<<","<<val[p];
                        return true;
                    }
                    p--;
                }
            }
        }
        return false;
    }

int main() {
 
    vector<int> data = {45,5,8,5,6,1,90};
    vector<int> data2 = {10,20,30,40,50};
    int sum = 90;
    int sum2 = 80;

    if(!(getPairSum(data,sum))){
        cout<<"no pair sum.."<<endl;
    }

    if(!(getTripletSum(data2,sum2))){
        cout<<"no triplet sum..";
    }




return (0);
}