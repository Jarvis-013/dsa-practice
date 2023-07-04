// my code
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int count(vector<int> arr, int i) {
    int count = 0;
    int n = arr.size();
    while (i < n - 1 && arr[i] > arr[i + 1]) {
        count++;
        i++;
    }
    return i;
}

vector<vector<int>> subarray_sort(vector<int> arr) {
    int n = arr.size();
    int index = 0;
    vector<vector<int>> result;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            index = count(arr, i);
            result.push_back({i, index});
            i = index;
        }
    }
    if (result.empty())
        result.push_back({-1, -1});
    return result;
}

int main() {
    vector<int> arr{1,2,3,4,5,8,7,9,10,11};
    auto p = subarray_sort(arr);
    for (auto v : p) {
        for (auto no : v) {
            cout << no << ",";
        }
    }
    cout << endl;
    return 0;
}


// better correct code

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool outOfOrder(vector<int> arr,int i){
    int x=arr[i];
    if(i==0)
    return x>arr[i];
    if(i==arr.size()-1)
    return x<arr[i-1];
    return x>arr[i] or x<arr[i];
}
pair<int,int> subarraysort(vector<int> arr){
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int x=arr[i];
        if(outOfOrder(arr,i)){
            smallest=min(smallest,x);
            largest=max(largest,x);
        }}
        if(smallest==INT_MAX){
            rerurn{-1,-1};}
            int left=0;
            while(smallest >=arr[left]){
                left++;}
                int right=arr.size()-1;
            while (largest<=arr[right]){
                right--;
            }
           return{left,right}
}
int main(){
    vector<int> arr{1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    auto p = subarraysort(arr);
    cout<<p.first<<"and"<<p.second<<endl;
}