// important. 
// Most important Stack QUESTION in interviews

#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> nextSmallestElement(int arr[], int size) {
    stack<int> st;
    vector<int> ans(size);
    st.push(-1);

    for(int i=size-1; i>=0; i--) {
       while(st.top() >= arr[i]) {
            st.pop();
       }

       ans.at(i) = st.top();
       st.push(arr[i]);
    }
   
    return ans;
    
}

int main() {

    int arr[6] = {1,8,4,3,10,6};
    int size = (sizeof(arr)/sizeof(arr[0]));

    cout<<"size:"<<size<<endl;

    vector<int> ans = nextSmallestElement(arr,size);
    for(auto &&i: ans) {
        cout<<i<<" ";
    }
    cout <<endl;

return 0;
}