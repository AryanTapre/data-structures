#include<iostream>
#include<vector>
using namespace std;
 

    vector<int> merge(vector<int>& v1, vector<int>& v2) {
        int i = 0;
        int j = 0;
        vector<int> ans;

        while(i< v1.size() && j<v2.size()) {
                if(v1[i] < v2[j]) {
                  
                    ans.push_back(v1[i]);
                    i++;
                }
                else {
                   
                    ans.push_back(v2[j]);
                    j++;
                }
        }

        cout << "i :"<<i <<" "<<"j:"<< j<< endl;

        if(i > v1.size()) {
            while(j < v2.size()) {
              
                ans.push_back(v2[j]);
                j++;
            }
        }
        else {
             while(i < v1.size()) {
                
                ans.push_back(v1[i]);
                i++;
            }
        }

        return ans;
    }

int main() {
 
    vector<int> v1 {2,3,7,16,24};
    vector<int> v2 {4,11,19};
    vector<int> ans = merge(v1,v2);
    cout << ans.size()<<endl;
    for(auto i : ans) {
        cout << i << " ";
    }
    cout << endl;


return (0);
}