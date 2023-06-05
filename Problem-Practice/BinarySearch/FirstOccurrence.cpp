/*
    TODO: return first occurrence of target in array; otherwise return -1
    CreatedBy:@AryanTapre
    OnDate:05-06-2023
*/

#include<iostream>
#include<vector>
using namespace std;
    
    //TC: O(logN)
    //SC: O(1)
    int firstOccurrence(vector<int>& A, int target) {
        int L = 0;
        int H = A.size()-1;
        int mid = 0;
        int ans = -1;

        while(L <= H) {

            mid = L + (H-L)/2;
            if(A.at(mid) == target) {
                ans = mid;
                H = mid-1;
            }
            else if (A.at(mid) < target) {
                L = mid+1;
            }
            else {
                H = mid-1;
            }
        }
        return ans;
    }

int main() {
 
    vector<int> A = {1,2,4,4,4,4,4,7,8,9};

    if(int ans = firstOccurrence(A,5)) {
        cout<<"first occurrence at:"<<ans<<endl;
    } else {
        cout<<"target not found"<<endl;
    }

return (0);
}

