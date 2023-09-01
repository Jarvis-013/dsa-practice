#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void bracket (string output,int n,int open,int close){
    ++i;
    if(i==2*n)
    {
        cout<<output<<endl;
        return;
    }
    if(open<n)
    bracket(output+'(',n,open+1,close,i+1);
    if(close<open)
    bracket(output+')',n,open,close+1,i+1);
}

int main(){
    string output;
    int n;
    cin>>n;
    bracket(output,n,0,0,0)
    return 0;
}