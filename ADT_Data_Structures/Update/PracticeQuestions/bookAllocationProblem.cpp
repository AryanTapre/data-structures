// practice.gfg : Allocate minimum number of pages
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

    bool isPossibleSolution(int arr[], int M, int page,int N) {
        int studentCount = 1;
        int pageSum = 0;
        for(int i=0; i<N; i++) {
            if(arr[i] > page) return false;

            pageSum+= arr[i];
            if(pageSum < page) continue;
            else if (pageSum > page) {
                studentCount++;
                pageSum = arr[i];

                if(studentCount > M) return false;
            }
        } 
        return true;
    }

    int findPages(int arr[], int M,int N) {
        if(M > N) return -1;

        int start = 0;
        int end = accumulate(arr,arr+N,0); // find sum of array.
        int ans = -1;
        while(start <= end) {
            int mid = start + (end -start) /2;
            if(isPossibleSolution(arr,M,mid,N)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }     
        return ans;
    }

int main() {
    
   int arr[]={12,34,67,90};
    int M = 2; // m is number of students.
    int N =4;// size of array
    
    int ans = findPages(arr,M,N);
    if(ans != -1) cout<<"minimum numbers of page allocated are : "<<ans<<endl;
    else cout<<"invalid assignment"<<endl;

return (0);
}