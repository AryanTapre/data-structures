#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    vector<int> arr{1,2,3,3,4,10,6,8};
    vector<int>brr{1,3,3,49,10,8};
    vector<int> ans;

    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<brr.size();j++) {
            if(arr[i] == brr[j]) {
                brr[j] = -1;
                ans.push_back(arr[i]);
            }
        } 
    }

    cout<<endl<<"after intersection:"<<endl;
    if(ans.empty()) {
        cout<<"no intersection found!";
    }
    else {
        for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    }
     


return (0);
}