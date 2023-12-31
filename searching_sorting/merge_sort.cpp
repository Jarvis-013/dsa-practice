#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cstring>
using namespace std;

void merge(vector<int> &arrray,int s,int e){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    vector<int> temp;
    while(i<=m and j<=e){
    if(array[i]<array[j]){
        temp.push_back(array[i]);
        i++;
    }
    else{
        temp.push_back(array[j]);
        j++;
    }
}
while(i<=m){
    temp.push_back(array[i++]);
}
while(j<=e){
    temp.push_back(array[j++]);
}

int k=0;
for(int idx=s;idx<e;idx++){
    array[idx]=temp[k++];
}
return;}

void mergesort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}

int main(){
    vector<int> arr{1,2,5,6,7,3,4};
    int s=0;
    int e=arr.size()-1;
    mergesort(arr,s,e);
    for(int x:arr){
        cout<<x<<",";
    }
    cout<<endl;
    return 0
}
