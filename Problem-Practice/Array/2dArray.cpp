/*  
    CreatedBy: @AryanTapre
    onDate: 31-05-2023
    Formula: column * i + j
*/

#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    
    vector<vector<int>> arr(2);
    arr = { {1,2,3} , {4,5,6} };

    // Row wise printing..
    cout<<"Row wise printing.."<<endl;
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[i].size(); j++) {
            cout<<arr.at(i).at(j)<<" ";
        }
        cout<<endl;
    }

    // Column wise printing..
    int sum = 0;
    cout<<"Column wise printing.."<<endl;
    for(int i=0; i<arr[i].size(); i++) {
      
        for(int j=0; j<arr.size(); j++) {
            cout<<arr[j][i]<<" ";
           
        }
        cout<<endl;
        
    }
    
     for(int i=0; i<arr[i].size(); i++) {
        sum = 0;
        for(int j=0; j<arr.size(); j++) {
            sum += arr[j][i];    
        }
        cout<<sum<<" ";

    }
    


return (0);
}