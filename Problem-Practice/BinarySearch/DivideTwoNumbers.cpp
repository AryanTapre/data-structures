/*
TODO: Divide two numbers using binary search algorithm
logic:
10/3 ,   10 is dividend ans 3 is divisor
    quotient*divisor+remainder = dividend


formula: quotient * divisor <= dividend
*/

#include<iostream>
using namespace std;
 
    int divideTwoBinarySearch(int dividend, int divisor) {

        if(dividend == 0 && divisor == 0) {
            return -1;
        }

        int low = 0;
        int high = dividend;
        int ans;
        

        while(low<=high) {
            int mid = low+(high-low)/2;
            // perfect solution
            if(mid*divisor == dividend) {
                return mid;
            }

            if(mid*divisor < dividend) {
                ans = mid;
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return ans;
    }

int main() {
 
    int dividend = 0;
    int divisor = 0;
    int ans = divideTwoBinarySearch(dividend,divisor);
    if(ans < 0) {
        cout << "RESULT IS UNDEFINED!"<<endl;
    } else {
        cout<<ans<<endl;
    }

return (0);
}