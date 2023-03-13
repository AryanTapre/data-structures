// https://practice.geeksforgeeks.org/contest/upcoming-sde-contest-1/problems#

#include <iostream>
using namespace std;

int isPossible(int arr[], int N, int i, int mode) {
       int pair = 0;
       int end = i;

        
       
       if(mode == 1) {
          // if(end == 0) end = end+1;

           while(end < N) {
               if(end%2 != 0) {
                   end = end + 2;
               }
               else {
                   end = end + 1;
               }

            //    cout<<"end:"<<arr[end-1]<<endl;
            //    cout<<arr[i]<<":"<<arr[end-1]<<endl;
               
               if(end > N) break;
               else{
                   if(((arr[i])&(arr[end])) > ((arr[i])^(arr[end]))) {
                       cout<< arr[i] <<" "<<arr[end]<<endl;
                       pair++;
                   }
               }
           }
       }
       else if(mode == 2) {
       
                // if(end == 0) end = end + 2;
                while(end < N)
                {
                    if(end%2 != 0) {
                       
                             end = end + 1;
                    }
                    else {
                        
                        end = end + 2; 
                    }
                   

                    if(end > N) break;
                    else{
                         if(((arr[i])&(arr[end])) > ((arr[i])^(arr[end]))) {
                           cout<< arr[i] <<" "<<arr[end]<<endl;
                           pair++;
                         }
                    }
               
                }

       }
       
       return pair;
    }
  
    long long pairs(int N, int arr[]) {
        long long ans = 0;
        for(int i=0; i<N; i++) {
            
            // odd
            int ans1 = isPossible(arr,N,i,1);
            int ans2 = isPossible(arr,N,i,2);

            int temp = ans1+ans2;
            ans = ans + temp;


      
            
        }
        return ans;
    }

int main() {
  int arr[] = {6,2,5,3};
  int n = 4;

  int ans = pairs(n,arr);
  cout<<"ans"<<ans;
  return 0;
}