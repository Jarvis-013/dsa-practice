#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void housing(vector<int> &arr,int n,int k){
    int i=0;
    int j=0,sum=0;
    while (j<n)
    {
    sum+=arr[j]; 
    j++;
    while (sum> k && i<j)
    {
        sum=sum-arr[i];
        i++;
    }
    if(cs==k){
        cout<<i<< " - "<<j-1<<endl;
    }
}
return;
}
int main(){
    vector<int> plot{1,2,3,4,5,6,7,8};
    int n=sizeof(plots)/sizeof(int);
    int k=8;
    housing(plots,n,k);
}