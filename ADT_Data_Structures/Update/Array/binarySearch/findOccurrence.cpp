// Finding first occurrence of element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findFirstOccurrence(vector<int>v,int target) {
    int s=0,e=v.size()-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s <= e) {
        if(v[mid] == target) {
            ans = mid;
            e = mid-1; 
        }
        else if (v[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int findTotalOccurrence(vector<int> v,int target) {
    vector<int> :: iterator firstOccurrence,lastOccurrence;
    firstOccurrence = lower_bound(v.begin(),v.end(),target);
    int startPosition = firstOccurrence-v.begin();

    lastOccurrence = upper_bound(v.begin(),v.end(),target);
    int endingPosition = lastOccurrence-v.begin();

    int totalOccurrence = lastOccurrence-firstOccurrence+1;
    return totalOccurrence;
}


int main() {
    vector<int> arr{1,3,4,4,4,4,4,6,7};
    int target = 8;
    cout<<"position :"<<findFirstOccurrence(arr,target)<<endl;
    
    vector<int> :: iterator first,last;
    first = lower_bound(arr.begin(),arr.end(),4);
    last = upper_bound(arr.begin(),arr.end(),4);
    cout<<endl<<"lower bound at position"<<(first-arr.begin())<<endl;
    cout<<"upper bound at position"<<(last-arr.begin())<<endl;

    cout<<endl<<"total occurrence : "<<findTotalOccurrence(arr,2);

return (0);
}