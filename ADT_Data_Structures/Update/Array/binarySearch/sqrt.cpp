#include<iostream>
using namespace std;

double findSqrt(int n,int precision) {
    int s=0,e=n;
    double mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e) {
        if(mid*mid == n) {
            return mid;
        }
        else if (mid*mid > n) {
            e = mid-1;
        }
        else if (mid*mid < n) {
            ans = mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    double finalAns = ans;
    double step = 0.1;
    for(int i=0;i<precision;i++) {
        for(double j=ans;j*j<=n;j=j+step) {
            finalAns = j;
        }
        step = step/10;
    }

    return finalAns;

}

int main() {
    int n,pre;
    cout<<"enter n:"<<endl;
    cin>>n;
    cout<<endl<<"enter precision:";
    cin>>pre;
    cout<<endl<<"ans is : "<<findSqrt(n,pre);
return (0);
}