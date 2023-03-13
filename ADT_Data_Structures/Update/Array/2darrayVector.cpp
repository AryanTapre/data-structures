#include<iostream>
#include<vector>
using namespace std;

int main() {
    // When rows and column are not known in advanced...
    vector<vector<int> > arr;

    vector<int> a{1,2,3};
    vector<int> b{4,5,6,4,10};
    vector<int> c{7,8};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
  

    cout<<endl;


    // when rows and column are known in advanced..
    vector<vector<int> > v(5,vector<int>(5,-8));

    for(int i=0;i<v.size();i++) {
        for(int j=0;j<v[i].size();j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<v[2][3];
    v[3][4] = 10;
    cout<<endl;
    for(int i=0;i<v.size();i++) {
        for(int j=0;j<v[i].size();j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    // Taking from user input..

    cout<<endl;
    int row,col;
    cout<<"enter numbers of rows:";
    cin>>row;
    cout<<"enter numbers of columns:";
    cin>>col;

    vector<vector<int> > user(row,vector<int>(col));
    cout<<"enter elements in 2d vector:"<<endl;
    for(int i=0;i<user.size();i++) {
        for(int j=0;j<user[i].size();j++) {
            cin>>user[i][j];
        }
    }

    cout<<endl<<"Printing 2d vector:"<<endl;
     for(int i=0;i<user.size();i++) {
        for(int j=0;j<user[i].size();j++) {
            cout<<user[i][j]<<" ";
        }
        cout<<endl;
    }

    
    // comments are here

    cout<<endl<<"number of rows for USER:"<<user.size();
    // rows and col are same then : user[0].size()   
    // else use loop :  user.[i].size()
    cout<<endl<<"number of columns for USER:"<<user[0].size();

return (0);
}