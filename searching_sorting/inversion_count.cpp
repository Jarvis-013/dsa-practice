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
    int cnt=0;
    vector<int> temp;
    while(i<=m and j<=e){
    if(array[i]<array[j]){
        temp.push_back(array[i]);
        i++;
    }
    else{
        cnt+=(m-i+1);
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

int inversion_sort(vector<int>&arr,int s,int e){
    if(s>=e){
        return 0;
    }
    int mid=(s+e)/2;
   int c1= inversion_sort(arr,s,mid);
   int c2= (arr,mid+1,e);
   int ci= merge(arr,s,e);
   return c1+c2+ci;
}

int main() {
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;
    int inversions = inversion_sort(arr, s, e);
    cout << inversions << endl;
    return 0;
}

