#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cstring>
using namespace std;
string string_window(string str, string s) {
    int max_indx = 0;
    int min_indx = str.length();
    int a = 0;
    unordered_map<char, int> m;
    
    for (int i = 0; i < str.length(); i++) {
        if((m.count(str[i])))
        continue;
        m[str[i]] = i;
    }
    //  for (const auto& pair : m) {
    //     cout << pair.first << ": " << pair.second << endl;
    //  }
    for (int i = 0; i < s.length(); i++) {
        if (m.count(s[i])) { 
            a = m[s[i]];
            max_indx = max(max_indx, a);
            min_indx = min(min_indx, a);
        }
    }
    cout<<max_indx<<","<<min_indx<<endl;
    return str.substr(min_indx, max_indx - min_indx + 1);
}


int main(){
    string check="hello_world";
    string s2="lol";
    cout<<string_window(check,s2);

}