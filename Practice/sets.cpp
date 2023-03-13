#include<iostream>
#include<set>
using namespace std;
 
int main() {
    set<pair<int,int> > ans;
    ans.insert({1,1});
    ans.insert({2,2});
    ans.insert({1,1});

  // cout<<ans.size();
   for(auto i : ans) {
    cout<<i.first;
    cout<<i.second;
    cout<<endl;
   }


    cout<< endl ;

    pair<int,int> p;
    p.first = 1;
    p.second = 2;
    
    cout<<p.first<<" "<<p.second <<endl;
return (0);
}