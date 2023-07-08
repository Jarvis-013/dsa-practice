//my code
#include<iostream>
#include<string>
#include<vector>

using namespace std;

string space20(string st) {
    int n = st.size();
    string result;
    int i = st.find(" ");
    result = st.substr(0, i) + "%20";
    while (i != string::npos) {
        int temp = i;
        i = st.find(" ", i + 1);
        if (i != string::npos) {
            result = result + st.substr(temp, i - temp) + "%20";
        } else {
            result = result + st.substr(temp) + "%20";
        }
    }
    return result;
}

int main() {
    string st = "HEY WASSUP PAL HOW YOU DOING";
    string ans = space20(st);
    cout << ans;

    return 0;
}

//better version


#include<iostream>
#include<string>
#include<vector>

using namespace std;