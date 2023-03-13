
#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
//#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(3);
    v.push_back(66);
    v.push_back(7);

    cout<<endl<<"Finding 6 ->"<<binary_search(v.begin(),v.end(),6);
    cout<<endl<<"Finding 9 ->"<<binary_search(v.begin(),v.end(),9);

    cout<<endl<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin();
    cout<<endl<<"Upper bound ->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 10;
    int b = 7;

    cout<<endl<<"Maximum ->"<<max(a,b)<<endl;
    cout<<"Minimum ->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a -> "<<a<<endl;
    cout<<"b -> "<<b;

    string x = "abcd";
    cout<<endl<<endl<<"Before string Reverse ->"<<x;
    reverse(x.begin(),x.end());
    cout<<endl<<"After Reverse string ->"<<x;

    cout<<endl<<endl;

    cout<<"Before Vector Rotate ->"<<endl;
    for(auto i : v) {
        cout<<i<<endl;
    }


    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl<<"After Vector Rotate ->"<<endl;
    for(auto i : v ) {
        cout<<i<<endl;
    }

    // sorting the vector...
    // sort() function works on introsort three algorithms(Quick Sort,Heap Sort,Insertion Sort)

    sort(v.begin(),v.end());

    cout<<endl<<endl<<"After Sort Vector is ->"<<endl;

    for(auto i : v) {
        cout<<i<<" ";
    }

    return (0);
}