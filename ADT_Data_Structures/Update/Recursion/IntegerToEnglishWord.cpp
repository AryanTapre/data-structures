/*
leetcode : 273
*/

#include<bits/stdc++.h>
using namespace std;

    string numberToWords(vector<pair<int,string>>& mp,int nums) {
        if(nums == 0) {
            return "Zero";
        }
        
        for(auto it:mp) {

            if(nums >= it.first) {
                string a ="";
                if(nums >= 100) {
                    a = numberToWords(mp,nums / it.first)+ " ";
                }
                string b = it.second;
                string c = "";
                if(nums % it.first != 0) {
                    c = " "+numberToWords(mp,nums % it.first);
                }
                return a+b+c;
            }
            
        }
        return "";

        
    }

 
int main() {
 
    
    vector<pair<int,string>> mp = {

        {1000000000,"Billion"},
        {1000000,"Million"},
        {1000,"Thousand"},
        {100,"Hundred"},
        {90,"Ninety"},
        {80,"Eighty"},
        {70,"Seventy"},
        {60,"Sixty"},
        {50,"Fifty"},
        {40,"Fourty"},
        {30,"Thirty"},
        {20,"Twenty"},
        {19,"Nineteen"},
        {18,"Eighteen"},
        {17,"Seventeen"},
        {16,"Sixteen"},
        {15,"Fifteen"},
        {14,"Fourteen"},
        {13,"Thirteen"},
        {12,"Twelve"},
        {11,"Eleven"},
        {10,"Ten"},
        {9,"Nine"},
        {8,"Eight"},
        {7,"Seven"},
        {6,"Six"},
        {5,"Five"},
        {4,"Four"},
        {3,"Three"},
        {2,"Two"},
        {1,"One"}
    };
    int nums = 123;
    string ans = numberToWords(mp,nums);
    cout<<ans;
    
return (0);

}