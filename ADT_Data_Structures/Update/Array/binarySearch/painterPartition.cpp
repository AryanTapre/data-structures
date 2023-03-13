#include<iostream>
using namespace std;
  bool isPainterAllocated(int arr[],int n,int k,int mid) {
        long long totalTime = 0;
        int painterCount = 1;
        
        for(int i=0; i<n; i++) {
            
            if(arr[i] > mid)
            {
                return false;
            }
            
            if (totalTime + arr[i] > mid) {
                painterCount++;
                totalTime = arr[i];
                
                if(painterCount > k) return false;
            }
            else {
                totalTime+=arr[i];
            }
        }
        return true;
    }

     long long minTime(int arr[], int n, int k)
    {
        // search space
       long long  start = 0;
        long long end = 0;
        for(int i=0;i<n;i++)
            end+=arr[i];
            
            
        long long  time = -1;
        
        while(start <= end) {
            int mid = start + (end - start) /2;
            
            if(isPainterAllocated(arr,n,k,mid)) {
                time = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return time;
    }
int main() {
    int arr[] = {5,10,30,20,15};
    int n = 5;
    int k =3;

    int ans = minTime(arr,n,k);
    cout<<"minimum time taken : "<<ans<<" minutes"<<endl;
return (0);
}