/*
TODO: move all negative elements towards left without maintaining order.
*/

#include<iostream>
#include<vector>
using namespace std;
 
    //TC : O(n)
    // SC: O(1)
    void moveNegatives(vector<int>& v) {
        int low = 0;
        int high = v.size()-1;
        int i=0;
                    
        while(low <= high) {
            if(v[i] < 0) {
                low++;
                i++;
            } else {
                swap(v[low],v[high]);
                high--;
            }
        }
    }

    void moveNegativesVersion2(vector<int>& v) {
        int low = 0;
        int high = v.size()-1;

        while(low <= high) {

            if(v[low] < 0){
                low++;
            } if(v[high] > 0) {
                high--;
            } else {
                swap(v[low],v[high]);
            }
            

        }
    }

int main() {
 
    vector<int> v = {1,2,6,-6};
    moveNegativesVersion2(v);
    for (auto &&i : v)
    {   
            cout<<i<<" ";
    }
    

return (0);
}