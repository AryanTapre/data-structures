#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int N) {
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for(int i=2;i<=N;i++) {
        for(int j=0;j<ans.size();j++) {
            int x = ans[j]*i+carry;
            ans[j] = x%10;
            carry = x/10;
        }
        while(carry) {
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans; 
}    

int main() {
    int N;
    cout<<"enter number to find factorial:";
    cin>>N;
    cout<<endl<<"factorial is : ";
    vector<int> fact = factorial(N);
    for(auto i: fact) {
        cout<<i;
    }
    cout << endl;
return (0);
}
