//leet code 179
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

        static bool myComparator(string a, string b) {
            string s1 = a+b;
            string s2 = b+a;
            return s1 > s2;
        }
 
        string largestNumber(vector<int>& nums) {
            vector<string> snums;
            for(auto str:nums) {
                snums.push_back(to_string(str));
            }

            sort(snums.begin(), snums.end(), myComparator);
            if(snums[0] == "0") return "0";
            string ans = "";
            for(auto str:snums) {
                ans+=str;
            }
            return ans;
        }

int main() {
    
    vector<int> v{3,30,34,5,9};
    string ans = largestNumber(v);
    for(auto i:ans){
        cout<<i;
    }
    cout<<endl;

return (0);
}