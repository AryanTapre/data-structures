#include<iostream>
#include<math.h>
using namespace std;


int main() {

        int n,bit,ans = 0,i = 0;

        cout<<"Enter value for n:";
        cin>>n;

        while (n!=0) {

                bit = ~(n%10);
		cout<<bit<<endl;
                n = n /10;
                if(bit == 1) {

                    ans = ans + pow(2,i);
                }
              //  n = n >> 1;
                i++;
              
        }

        cout<<"Decimal Conversion Is : "<<ans;
        return(0);


}