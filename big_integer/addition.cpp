
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

string addnumber(string s1,string s2){
    if(n1.length()>n2.length()){
        swap(n1,n2);
    }
    string result="";
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());
    int carry=0;
    for(int i=0;i<n1.length();i++){
        int d1=n1[i]-'0';
        int d2=n2[i]-'0';
        int output_digit=sum%10;
        carry=sum/10;
        result.push_back(output_digit);    
    }
    for(int i=n1.length();i<n2.length();i++){
        int d2=n2[i]-'0';
        int sum=d2+carry;
        int output_digit=sum%10;
        carry=sum/10;
        result.push_back('0'+output_digit);
    }
    if(carry)
    result.push_back('1');

    return(reverse(result.begin(),result.end()));
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string result=addnumber(s1,s2);
    return 0;
}