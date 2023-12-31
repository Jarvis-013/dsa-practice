
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int count_triplet(vector<int> arr ,int r){
    int n=arr.size();
    unordered_map<long,long> right,left;

    for(auto x: arr){
        right[x]++;
        left[x]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        right[arr[i]]--;
        if(arr[i]%r==0){
            long b=arr[i];
            long a=arr[i]/r;
            long c=arr[i]*r;
            ans+=left[a]*right[c]  ;
        }
        left[arr[i]]++;
    }
    return ans;
}
