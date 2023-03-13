// Solving painter partiton problem

#include<iostream>
using namespace std;

class Solution {
    public:

            int isBoardSet(int arr[], int n, int k, int mid) {
                int painterCount = 1;
                int sum = 0;
                for(int i=0; i<n ;i++)
                {
                    if(sum+arr[i] <= mid) 
                    {
                        sum=sum+arr[i];
                    }
                    else
                    {
                        painterCount+=1;
                        if(arr[i] > mid || painterCount > k )
                        {
                            return false;
                        }
                    }
                }
                return true;
            }

            int partitionPainter(int arr[], int n, int k) {
                int s = 0,sum = 0;
                for(int i=0; i<n; i++) 
                {
                    sum+=arr[i];
                }
                int e = sum;

                int mid = s + (e-s)/2;
                int ans = -1;
                while(s<=e) 
                {

                    if(isBoardSet(arr,n,k,mid))
                    {
                            ans = mid;
                            e = mid-1;
                    }
                    else
                    {
                        s = mid+1;
                    }
                    mid = s + (e-s)/2;
                }
                return ans;
            }

};

int main() {

    int arr[4] = {5,5,5,5};
    Solution s;
    cout<<"Minimum time taken to paint boards is : "<<s.partitionPainter(arr,4,2);
    return (0);
}