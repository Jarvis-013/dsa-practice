#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


void sunsequence(string s,string o,vector<string> &v){
    if(s.size()==0){
        v.push_back(o);
        return;}
        char ch =s[0];
        string reduced_input=s.substr(1);
        subsequence(reduced_input,o+ch,v);
        subsequence(reduced_input,o,v);
}
bool compare(string s1,string s2){
    if(s1.length()==s2.length()){
        return s1<s2;
    }
    return s1.length()<s2.length();
    }
int main(){
    string s;
    cin>>s;
    vector<string> v;
    string output="";

    sunsequence(s,output,v);
    sort(v.begin(),v.end(),compare);
   for (auto s:v)
   cout<<s<<",";
    return 0;
}  

recurssive tree
{
subsequence("abc", "", v)
                           level 0
   |                              
   ├── subsequence("bc", "a", v)        level 1
   │   |                              
   │   ├── subsequence("c", "ab", v)    level 2
   │   │   |                              
   │   │   ├── subsequence("", "abc", v)    level 3 (Base case: "abc" added to v)
   │   │   └── subsequence("", "ab", v)     level 3 (Base case: "ab" added to v)
   │   └── subsequence("c", "a", v)       level 2
   │       |                              
   │       ├── subsequence("", "ac", v)    level 3 (Base case: "ac" added to v)
   │       └── subsequence("", "a", v)     level 3 (Base case: "a" added to v)
   └── subsequence("bc", "", v)         level 1
       |                              
       ├── subsequence("c", "b", v)       level 2
       │   |                              
       │   ├── subsequence("", "bc", v)    level 3 (Base case: "bc" added to v)
       │   └── subsequence("", "b", v)     level 3 (Base case: "b" added to v)
       └── subsequence("c", "", v)        level 2
           |                              
           ├── subsequence("", "c", v)     level 3 (Base case: "c" added to v)
           └── subsequence("", "", v)      level 3 (Base case: "" added to v)


}


subsequence("abc", "", v)
                                                        Level 0 (s = "abc", o = "", v = [])
   |                                                      
   ├── subsequence("bc", "a", v)                                Level 1 (s = "bc", o = "a", v = [])
   │   |                                                      
   │   ├── subsequence("c", "ab", v)                            Level 2 (s = "c", o = "ab", v = [])
   │   │   |                                                      
   │   │   ├── subsequence("", "abc", v)                            Level 3 (Base case: ch = 'c', s = "", o = "abc", v = ["abc"])
   │   │   └── subsequence("", "ab", v)                             Level 3 (Base case: ch = 'c', s = "", o = "ab", v = ["abc", "ab"])
   │   └── subsequence("c", "a", v)                               Level 2 (s = "c", o = "a", v = ["abc", "ab"])
   │       |                                                      
   │       ├── subsequence("", "ac", v)                            Level 3 (Base case: ch = 'c', s = "", o = "ac", v = ["abc", "ab", "ac"])
   │       └── subsequence("", "a", v)                             Level 3 (Base case: ch = 'c', s = "", o = "a", v = ["abc", "ab", "ac", "a"])
   └── subsequence("bc", "", v)                                 Level 1 (s = "bc", o = "", v = ["abc", "ab", "ac", "a"])
       |                                                      
       ├── subsequence("c", "b", v)                               Level 2 (s = "c", o = "b", v = ["abc", "ab", "ac", "a"])
       │   |                                                      
       │   ├── subsequence("", "bc", v)                            Level 3 (Base case: ch = 'c', s = "", o = "bc", v = ["abc", "ab", "ac", "a", "bc"])
       │   └── subsequence("", "b", v)                             Level 3 (Base case: ch = 'c', s = "", o = "b", v = ["abc", "ab", "ac", "a", "bc", "b"])
       └── subsequence("c", "", v)                                Level 2 (s = "c", o = "", v = ["abc", "ab", "ac", "a", "bc", "b"])
           |                                                      
           ├── subsequence("", "c", v)                             Level 3 (Base case: ch = 'c', s = "", o = "c", v = ["abc", "ab", "ac", "a", "bc", "b", "c"])
           └── subsequence("", "", v)                              Level 3 (Base case: ch = 'c', s = "", o = "", v = ["abc", "ab", "ac", "a", "bc", "b", "c", ""])
