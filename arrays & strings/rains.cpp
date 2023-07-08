// my code with sir ji ka logic
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int rain(vector<int> arr) {
    vector<int> left;
    vector<int> right;
    int maxi = arr[0], count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxi)
            maxi = arr[i];
        left.push_back(maxi);
    }

    int n = arr.size();
    maxi = arr[arr.size() - 1];
    right.resize(n); // Resize the right vector to accommodate elements

    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] > maxi)
            maxi = arr[i];
        right[n - i - 1] = maxi;
    }

    for (int i = 0; i < arr.size(); i++) {
        count = count + (min(left[i], right[right.size() - i - 1]) - arr[i]);
    }

    return count;
}

int main() {
    vector<int> ar{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain(ar);
}



// sir ji ka method

#include<iostream>
#include<vector>
using namespace std;
int trappedwater(vector<int> height){
    int n=height.size();
    if(n<=2)
    return 0;

    vector<int> left(n,0),right(n,0);
    left[0]=height[0];
    right[n-i-1]=height[n-1];

    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],height[i])
        right[n-i-1]=max(right[n-i],height[n-i-1]);
    }
    
    for(int i=0;i<n;i++)
    water+=min(left[i],right[i])-height[i];
    
    return water;
    
    }
