// leet code 443
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
    
        int compress(vector<char>& s) {
        int index = 0,count = 1;
        int prev = 0;
        for(int i=1; i<s.size(); i++) {
                if(s[prev] == s[i]) {
                    count++;
                }
                else {
                        s[index++] = s[prev];
                    if(count > 1) {
                        int start = index;
                        while(count) {
                            s[index++] = (count % 10) + '0';
                            count/= 10;
                        }
                        reverse(s.begin()+start,s.begin()+index);
                         
                    }
                        prev = i;
                        count = 1;
                }
        }
         s[index++] = s[prev];
        if(count > 1) {
            int start = index;
                          while(count) {
                            s[index++] = (count % 10) + '0';
                            count/= 10;
                        }
                        reverse(s.begin()+start,s.begin()+index);             
        }


        return index;

    }

int main() {
 
   vector<char> ch{'a'};
   cout<<endl<<compress(ch); 

return (0);
}

