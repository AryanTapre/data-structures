#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	for(int i=0;i<=n;i++) {
		for(int j=i+1;j<=n;j++) {
			for(int x=j+1;x<=n;x++) {
				if(arr[i]+arr[j]+arr[x] == K) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[x]);
                    ans.push_back(temp);
				}
			}
		}
	}
	return ans;
}

int main(){
    vector<int> arr{10,5,5,5,2};
    vector<vector<int> > ans = findTriplets(arr,5,12);
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 

    return 0;
}