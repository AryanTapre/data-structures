/*
    
    ondate - 25-05-2023
    created by- @AryanTapre
*/

#include<vector>
#include<limits.h>
#include<iostream>
using namespace std;
 
int print_no_required(vector<int>&v, int target) {
    if(target == 0) {
        return 0 ;
    }

    if(target < 0) {
         return -1;
    
    }
    
    for(int i=0; i<v.size(); i++) {
        int r = print_no_required(v,target-v[i]);
        if(r >= 0) {
            cout<<v[i]<<" ";
        }
    }
    
    return 0;ṭ
}

int solve(vector<int>& v, int target) {
    if(target == 0) {
        return 0;
    }
    if(target < 0) {
        return INT_MAX;
    } 

    int mini = INT_MAX;
    for(int i=0; i<v.size(); i++) {
        int ans = solve(v,target - v[i]);

        if(ans != INT_MAX) {
            mini = min(mini,ans+1);
        }
        

    }

    return mini;

}

int solve2(vector<int>& v, int target, int out,vector<int>& result) {
    if(out == target) {
        return 0;
    } else if(out > target) {
        return -1;
    }

    int mini = INT_MAX; 
    for (int i = 0; i < v.size(); i++)
    {
        int r = solve2(v,target,out+v[i],result);
        if(r != -1) {
            result.push_back(v[i]);
          
        }
    }
    return 0;
}

int main() {
 
vector<int> v ={1,2};
int target = 2;

cout<<"no required to reach target:"<<endl;
print_no_required(v,target);

cout<<endl<<"minimum no to reach the target:";
cout<<solve(v,target);

cout<<endl<<"using solve2() method :"<<endl;
int out = 0;
vector<int> result;
solve2(v,target,out,result);
// for(auto i : result) {
//     cout<<i<<" ";
// }


return (0);
}