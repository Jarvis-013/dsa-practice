#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;


void subset_sum(int &n, int ans, vector<int> &arr) {
    if (n == 0) {
        arr.push_back(ans);
        return;
    }
    int rem = n % 10;
    n = n / 10;
    subset_sum(n, ans * 10 + rem, arr);
    subset_sum(n, ans, arr);
}

int main() {
    int n,sum;
    cin >> n>> sum;
    int count=0;
    unordered_set<int> u;
    vector<int> subsets;
    subset_sum(n, 0, subsets);
    for (int subset : subsets) {
        u.insert(subset);
    }

    for(int i=0;i<subsets.size();i++){
        if(u.find(sum-subsets[i])!=u.end())
        count++;
    }
    cout<<count;
    return 0;
}

