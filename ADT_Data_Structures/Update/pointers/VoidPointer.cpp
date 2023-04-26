#include<bits/stdc++.h>
using namespace std;

    void increase(void *data, int ptrSize) {
        if(ptrSize == sizeof(char)) {
            char * charPtr;
            //charPtr = (char*)data;
            charPtr = static_cast<char*>(data);
            (*charPtr)++;
        }
        else if(ptrSize == sizeof(int)) {
            int * intPtr;
          //  intPtr = (int*)data;
          intPtr = static_cast<int*>(data);
            (*intPtr)++;
        }
    }

int main()
{

    char c = 'a';
    int i = 4;
    increase(&c,sizeof(c));
    cout<<"value of c : "<<c<<endl;

    increase(&i,sizeof(i));
    cout<<"value of i : "<<i<<endl;

return 0;
}