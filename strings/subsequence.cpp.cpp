#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool subsequence(string str, string check) {
    vector<string> result;
    int j = check.length() - 1;
    int i = str.length() - 1;
    while (j != -1 && i != -1) {
        if (str[i] != check[j]) {
            i--;
        } 
        else {
            j--;
            i--;
            result.push_back("true");
        }
    }
    if (result.size() == check.length())
        return true;
    else
        return false;
}

int main() {
    string s1 = "hellothere";
    string s2 = "elaer";
    if (subsequence(s1, s2))
        cout << "yes";
    else
        cout << "NO";

    return 0;
}
