/*
    TODO: return last occurrence of target in array; otherwise return -1
    CreatedBy:@AryanTapre
    OnDate:07-06-2023
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    
    //TC: O(logN)
    //SC: O(1)
    int lastOccurrence(vector<int>& A, int target) {
        int L = 0;
        int H = A.size()-1;
        int mid = 0;
        int ans = -1;

        while(L <= H) {

            mid = L + (H-L)/2;
            if(A.at(mid) == target) {
                ans = mid;
                // right search
                L = mid+1;
            }
            else if (A.at(mid)>target){
                //right Search
                H = mid-1;
            }else {
                L= mid+1;
            }
        }
        return ans;
    }

int main() {
 
    vector<int> A = {1,2,4,4,4,4,4,7,8,9};

    if(int ans = lastOccurrence(A,4)) {
        cout<<"last occurrence at:"<<ans<<endl;
    } else {
        cout<<"target not found"<<endl;
    }

    auto a = upper_bound(A.begin(),A.end(),4);
    cout<<a-A.begin();

return (0);
}

