// finding peak index in an mountain array e.g {3,4,5,1} peak will be 5..

#include<iostream>
using namespace std;

class Solution {
	public:
		int getPeakIndexInMountainArray(int *,int);
		Solution() {
			
		}
		~Solution() {
			
			// char *p = new char;
			// delete p;
		}
};

int Solution :: getPeakIndexInMountainArray(int *arr,int size) {

	int start = 0, end = size-1;
	int mid = start + (end - start)/2;

	while(start < end) {
			
		if(arr[mid] < arr[mid+1]) {
				start = mid+1;
		}
		else {
			end = mid;
		}

		mid = start + (end - start)/2;
	}
	return (start);
			
}

int main() {

	int a[7] = {10,15,20,21,20,19,18};
	Solution sol;
	int ans = sol.getPeakIndexInMountainArray(a,(sizeof(a)/sizeof(int)));
	cout<<endl<<"Peak index is : "<<ans;
	
	return (0);
}

