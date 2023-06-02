/*  
    CreatedBy: @AryanTapre
    onDate: 31-05-2023
    TODO : Perform linear search in 2d array
*/

#include<vector>
#include<iostream>
using namespace std;
 
    bool search(vector<vector<int>> arr, int target) {
        for (auto &&i : arr)
        {
            for (auto &&j : i)
            {
                if(target == j) return true;
            }
        }
        return false;
    }

int main() {
 
    vector<vector<int>> arr(2);
    arr = {{1,2,3},{4,5,6}};
    
    int target = 0;
    if(search(arr,target)){
        cout<<"found"<<endl;
    } else {
        cout<<"NOT found"<<endl;
    }

return (0);
}
