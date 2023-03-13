#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> v ,int target) {
    int lowIndex = 0, highIndex = v.size()-1;
    int mid = lowIndex + (highIndex - lowIndex)/2;
    while(lowIndex <= highIndex) {
        if(v[mid] == target) {
            return mid;
        }
        else if(v[mid] < target) {
            lowIndex = mid+1;
        }
        else {
            highIndex = mid-1;
        }
        mid = lowIndex + (highIndex - lowIndex)/2;
    }
    
    return -1;
} 

int main() {
    
    vector<int> v{10,20,55,78,90,91,108,112,113,120,541,555,1000};
    int search = 10;
    cout<<"Search found at position : "<<binarySearch(v,search);
    //int ans = binary_search(v.begin(),v.end(),search);
   // cout<<ans<<endl;
return (0);
}