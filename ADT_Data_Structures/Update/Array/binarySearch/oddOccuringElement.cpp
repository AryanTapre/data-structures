// find odd occurring element in array
// there will be one element whose occurrence will be odd , all others will be even

#include<iostream>
#include<vector>
using namespace std;

int solveOddOccurring(vector<int> v) {
    int start = 0;
    int end = v.size()-1;
    int mid = start + (end-start)/2;

    while(start <= end) {

        // for single element..
        if(start == end) {
            return start;
        }
        // odd even case handling..
        if(mid % 2 == 0) {
            if(v[mid] == v[mid+1]) {
                start = mid+2;
            }
            else {
                end = mid;
            }
        }
        else {
            if(v[mid] == v[mid-1]) {
                end = mid-2;
            }
            else {
                end = mid-1;
            }
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    
    vector<int> v{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans  = solveOddOccurring(v);
    cout<<"index : "<<ans<<endl;
    cout<<"value : "<<v[ans]<<endl;
return (0);
}