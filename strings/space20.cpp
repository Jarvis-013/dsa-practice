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

void replace_space(char *str){
    int spaces =0;
    for(int i=0;str[i]!='\0';i++)
    if(str[i]==' ')
    spaces+=1;
    int idx=strlen(str)+2*spaces;
    str[idx]='\0';
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==' '){
            str[idx-1]='0';
            str[idx-2]='2';
            str[idx-3]='%';
            idx=idx-3;
        }
        else{
            str[idx-1]=str[i];
            idx--;
}
}
}

int main(){
    char input[10000];
    cin.getline(input,1000);
    replace_space(input);
    cout<<input<<endl;
}