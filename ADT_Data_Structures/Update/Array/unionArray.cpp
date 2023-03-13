#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    
    int arr[] = {10,20,30,40,50};
    int brr[] = {60,70,80,90,100};
    int sizea=5,sizeb=5;
    vector<int> ans;
    //vector<int> :: iterator p;

    // pushing all arr in ans
    for(int i=0;i<sizea;i++) {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<sizeb;i++) {
        ans.push_back(brr[i]);
    }

    cout<<"union is"<<endl;
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    } cout<<endl;

    


return (0);
}