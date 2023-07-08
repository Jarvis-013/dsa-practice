#include<iostream>
#include<string>
using namespace std;

int main(){

    string st;
    string word;

    getline(cin,st);
    int n=st.size();
    int i=st.find(word);
    for(;i<n;){
        cout<<i<<";";
        i=st.find(i+1);
    }
}