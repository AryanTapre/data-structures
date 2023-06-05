/*
    sort array is ascending order...
    createdBy:@AryanTapre
    onDate:28-05-2023

    TimeComplexity: O(N)
    SpaceComplexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;
 
    void sort01(vector<int>& data) {
        int i = 0;
        int j = data.size()-1;

        while(i <= j) {

            // i & j have correct values as : 0 and 1
            if(data[i] == 0 && data[j] == 1) {
                i++;
                j--;
            }

            // i&j values against each other
            if(data[i] == 1 && data[j] == 0) {
                swap(data[i],data[j]);
                i++;
                j--;
            }

            // i & j both have 0
            if(data[i] == 0 && data[j] == 0) {
                int tempIndex = i+1;
                while(data[tempIndex] != 1) {
                    tempIndex++;
                }
                swap(data[tempIndex],data[j]);
                i = tempIndex+1;
                j--;
            }

            // i & j both have 1
            if(data[i] == 1 && data[j] == 1) {
                int tempIndex = j-1;
                while(data[tempIndex] != 0) {
                    tempIndex--;
                }
                swap(data[i],data[tempIndex]);
                i++;
                j = tempIndex-1;
            }

           
        }
    }

    void sort01v2(vector<int>& data) {
        int start = 0;
        int end = data.size()-1;
        int i=0;
        while(i != end) {
            
            if(data[i] == 0) {
                //swap(data[start],data[i]);
                start++;
                i++;
            }
            else {
                swap(data[end],data[start]);
                end--;
            }
        }
    }

int main() {
 
    vector<int> data = {0,1,1,0,1,0,1,0,0};
     
    sort01(data);
    for(auto i : data) {
        cout<<i<<" ";
    }

    sort01v2(data);
    cout<<endl;
     for(auto i : data) {
        cout<<i<<" ";
    }

return (0);
}