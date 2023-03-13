// https://www.spoj.com/problems/PRATA/
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
    
    bool isPossibleSolution(vector<int>& cookRank, int prata, int mid) {
        int currentPrata = 0;
        for(int i=0; i<cookRank.size(); i++) {
            int R = cookRank[i],j=1;
            int timeTaken = 0;

            while(true) {
                if(timeTaken+ j*R <= mid) {
                    currentPrata++;
                    timeTaken += j*R;
                    j++;
                }
                else {
                    break;
                }
            }
            if(currentPrata >= prata)
                return true;
        }
        return false;

    }


    int minTimeOrder(int prata, vector<int> cookRank) {
        int start = 0;
        int max = *max_element(cookRank.begin(),cookRank.end());
        int end = max * (prata*(prata+1)/2);
        int ans = -1;

     //   cout<<"end:"<<end<<endl;

        while(start <= end) {
            int mid = start + (end-start)/2;

            if(isPossibleSolution(cookRank,prata,mid)) {
              //  cout<<mid;
                ans = mid;
                end = mid - 1;
               // cout<<"ans:"<<ans<<endl;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }

int main() {
    
    int prata ,cook ;
    vector<int> cookRank;
    cout<<"enter number of prata : ";
    cin>>prata;
    cout<<endl<<"enter number of cook : ";
    cin>>cook;
    cout<<endl<<"enter rank for cooks :"<<endl;
    for(int i=0; i<cook; i++) {
        int a;
        cin>>a;
        cookRank.push_back(a);
    }
    cout<<endl<<"minimum time taken to cook prata's is : "<<minTimeOrder(prata,cookRank)<<" minutes";

    


return (0);
}