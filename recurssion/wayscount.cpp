#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int wayscount(int n){
    if(n<0)
    return 0;
    if(n==0)
    return 1;

    return wayscount(n-1) + wayscount(n-2)+wayscount(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<wayscount(n);
}