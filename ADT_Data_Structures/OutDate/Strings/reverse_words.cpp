// leet code: problem 186. Reverse words in a string..

#include<iostream>
#include<vector>

using namespace std;

void reverseWords(char s[]) 
{

    int counter = 0,update = 0,start = 0,end = 0,i =0;

    while(s[i] != '\0') 
    {

        if((s[i] == ' ') || (s[i] == '\0')) 
        {
            
            end = i-1;
            counter = 0;
            start = end - (update-1);

            while(start<=end){
             
                swap(s[start++],s[end--]);
            }

        }
        else 
        {
            update = counter++;
        }
        i++;

    }

     int j=0;
    while(s[j] <= 12) {

        cout<<s[j];
        j++;
    }


}



int main() {

   
   char ch[20];

   cout<<"Enter characters:";
   cin>>ch;

   reverseWords(ch);
    return 0;
}