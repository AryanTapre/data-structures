// Leetcode 84
// Most important Stack QUESTION in interviews
#include<iostream>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;

vector<int> previousSmallestElement(vector<int> &input) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(input.size());

    for(int i=0; i<input.size(); i++) {
        int current = input[i];

        while(s.top() != -1 && input[s.top()] >= current) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> nextSmallestElement(vector<int> &input) {
    stack<int>s;
    vector<int> ans(input.size());
    s.push(-1);

    for(int i=input.size()-1; i>=0; i--) {
        int current = input[i];
        while(s.top()!= -1 && input[s.top()] >= current) {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}


int largestRectangleArea(vector<int>& heights) {
    vector<int> previousSmallest = previousSmallestElement(heights);
    vector<int> nextSmallest = nextSmallestElement(heights);
    int maxArea = INT_MIN;

    for(int i=0; i<heights.size(); i++) {

        if(nextSmallest[i] == -1) {
            nextSmallest[i] = heights.size();
        }

        int width = nextSmallest[i] - previousSmallest[i] - 1;
        int length = heights[i];
        int totalArea = length*width;
        maxArea = max(totalArea,maxArea);
    }
    return maxArea;
}

int main() {
 
    vector<int> input{2,4};
    vector<int> ans1 = previousSmallestElement(input);
    vector<int> ans2 = nextSmallestElement(input);
    int area = largestRectangleArea(input);
    cout<<"area : "<<area<<endl;

return 0;
}