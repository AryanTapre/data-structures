#include<vector>
#include<iostream>
using namespace std;

int linear_search(int s,int e,int key,vector<int>& arr) {
    for(int i=s;i<=e;i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void sort012(vector<int>& arr) {
    int l=0,r=arr.size()-1;
    bool flag = true; 
    while(l < r)
    {   
        while(arr[l] == 0) {
            l++;
        }
        while(arr[r] == 2) {
            r--;
        }

        if(flag)
        {
            int ans = linear_search(l+1,r,0,arr);    
            if(ans != -1) {
                swap(arr[l],arr[ans]);
                l++;
                continue;
            }
            else {
                flag = false;
            }    
        }
        else
        {
            while(arr[l] == 1) {
                l++;
            }
            if(l < r) {
                swap(arr[l],arr[r]);
                l++;
                r--;
            }
        }
    }

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
 vector<int> arr{2, 1, 2, 0, 1, 0};
 
 sort012(arr);
return (0);
}