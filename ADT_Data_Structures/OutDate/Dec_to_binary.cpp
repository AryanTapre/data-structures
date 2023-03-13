#include<math.h>
#include<iostream>
using namespace std;

int main() {

        int n,quo,divident,divisor=2,rem,ans=0,i=0;
        cout<<"Enter value for n:";
        cin>>n;
        divident = n;
      

        while(n!=0) {

            quo = divident/divisor;
            rem = divident%divisor;
            divident = quo;
            n = n/divisor;
            if(rem > 0) {
                rem = 1;
            }
            ans = (pow(10,i)*rem)+ans;
            i+=1;

        }

        cout<<endl<<"Binary conversion is: "<<ans;
        return(0);
}