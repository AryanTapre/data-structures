#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<vector>int > findPairSum(vector<int>& arr,int sum) {
    vector<vector>int> ans;
    for(int i=0;i<arr.size();i++) {
        for(int j=i+1;j<arr.size();j++) {
            if(arr[i] + arr[j] == sum) {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);

            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main() {
 vector<int> arr{1,2,3,4,5};
return (0);
}