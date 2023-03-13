//     1
//    232
//   34543
//  4567654
// 567898765 


#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter size for pattern:";
    cin>>n;

    int counter=1,counterNew=counter;

    for(int row=0;row<n;row++) {
        counterNew = counter; 

        for(int col=0;col<=(n-1)+row;col++) {
              
            if(col >= n-(row+1)) 
            {
                if(col <= n-1) {
                   cout<<counterNew;
                   if(col != n-1 ) 
                   {
                      counterNew++;
                   }
         
                }
                else
                {
                    counterNew=counterNew-1;
                    cout<<counterNew;
                }
                
            }
            else 
            {
                cout<<" ";
            }

        }
        
        counter++;
        cout<<endl; 
    }

    return (0);
}