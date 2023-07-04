// my method calling pairsum function from triplet func time complexity O(n2)

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> pairsum(vector<int> arr, int sum)
{
    unordered_set<int> s;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        if (s.find(x) != s.end()) {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
    }
    return {};
}

vector<int> triplet(vector<int> arr, int sum)
{
    unordered_set<int> s;
    vector<int> new_vec;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        new_vec = arr;
        new_vec.erase(find(new_vec.begin(), new_vec.end(), arr[i]));
        result = pairsum(new_vec, x);
        if (!result.empty()) {
            result.push_back(arr[i]);
            return result;
        }
    }

    return {};
}

int main()
{
    vector<int> arr{10, 5, 3, 2, -2, -4, 9};
    int s = 4;
    auto p = triplet(arr, s);
    if (p.size() == 0)
        cout << "NO PAIR FOUND";
    else
        cout << p[0] << "," << p[1] << "," << p[2] << endl;
    return 0;
}

// better method

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int arr,int targetsum)
{
  int n=arr.size();
  sort(arr.begin(),arr.end());
  vector<vector<int>> result;
  for(int i=0;i<=n-3;i++)
  {
    int j=i+1;
    int k=n-1;
    while(j<K){
      int current_sum=arr[i];
      current_sum+=arr[j];
      current_sum+=arr[k];

      if(current_sum==targetsum){
        result.push_back({arr[i],arr[j],arr[k]});
        j++;
        k--;
      }
      else if(current_sum>targetsum)
      k--;
      else
      j++;
    }
  }
return result}

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int s = 18;
    auto p = triplet(arr, s);
    for(auto v:p)
    for(auto no:v){
      cout<<no<<",";
    }
    cout<<endl;
}
