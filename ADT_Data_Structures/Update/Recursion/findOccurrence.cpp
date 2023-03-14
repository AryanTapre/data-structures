// find all occurrence for given key in array..
#include<iostream>
using namespace std;
 
    void findAllOccurrence(int arr[],int& key, int& n,int& ans,int& i) {
            if(i >= n)
               return;

            if(arr[i] == key) {
                ans+=1;
            }
             findAllOccurrence(arr,key,n,ans,++i);
    }

int main() {
 
    int arr[] = {10,30,15,10,44,26,10,0};
    int key = 10;
    int n = 8,ans = 0,i = 0;

    findAllOccurrence(arr,key,n,ans,i);
    cout<<"total occurrences are : "<< ans;
    

return (0);
}