#include<iostream>
#include<vector>
using namespace std;
 
int main() {

    int n=100;
    int l=0;
    int ans=0;
    
    vector<int> v;
    for(int i=1;i<=n;i++) {
        v.push_back(i);
    }
    int h=v.size()-1;
    while(l<=h) {
        int mid = l+(h-l)/2;
        //cout<<"mid"<<mid<<endl;
       
        
        if((v[mid]*v[mid]) == n) {
            ans = v[mid];
           // cout<<"executed...";
            break;
        }
        else if((v[mid]*v[mid]) > n) {
            h=mid-1;
        }
        else {
            l=mid+1;
            ans=v[mid];
        }
    }

    cout<<ans;

return (0);
}