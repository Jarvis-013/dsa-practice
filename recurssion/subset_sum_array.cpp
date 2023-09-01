#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int countsubset(vector<int> arr,int n,int i,int x){
    if(i==n){
        if(x==0)
        return 1;
        else 
        return 0;
    }

    int inc=countsubset(arr,n,i+1,x-arr[i]);
    int exc=countsubset(arr,n,i+1,x);
    return inc+exc;
}
