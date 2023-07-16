#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

string unique_substring(string str) {
    unordered_set<char> ch;
    string ans = "";
    string check = "";
    for (int i = 0; i < str.length(); i++) {
        if (ch.find(str[i]) != ch.end()) {
            if (ans.length() > check.length())
                check = ans;
            ch.clear();
            ans = "";
            i--;
            continue;
        }
        
        ch.insert(str[i]);
        ans += str[i];
    }
 
    if (ans.length() > check.length())
        check = ans;
 
    return check;
}

int main(){
    string s="aabcb";
    cout<<unique_substring(s);

}