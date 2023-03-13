#include<iostream>
#include<vector>
using namespace std;
 
bool binarySearch(vector<int> arr,int key) {
    int l = 0,h=arr.size()-1,m = l + (h-l)/2;
    while(l <= h) {
        if(arr[m] == key) {
            return true;
        }
        else if(arr[m] < key) {
            l = m+1;
        }
        else {
            h = m-1;
        }
        m = l + (h-l)/2; 
    }
    return false;
}

vector<int> commonElements(vector<int>a, vector<int>b, vector<int>c) {
    vector<int> ans;
    for(int i=0;i<a.size();i++) {

        int key = a[i];
        if(binarySearch(b,key)) {
            if(binarySearch(c,key)) {
                ans.push_back(key);
            }
            else {
                continue;
            }
        }
        else {
            continue;
        }
       
    }
    return ans;
}

int main() {
    vector<int> a{1,5,10,2,40,180};
    vector<int> b{6,7,2,810,100};
    vector<int> c{3,4,15,220,30,70,800,120};

    vector<int> ans = commonElements(a,b,c);
    for(auto i : ans) {
        cout<<i<<" ";
    }
    
    cout << endl;
return (0);
}