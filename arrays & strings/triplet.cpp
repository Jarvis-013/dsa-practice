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

