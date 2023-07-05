#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm> // Added header file for sort function
using namespace std;

int countMinSwaps(vector<int> arr) {
    int n = arr.size();
    int ans = 0;
    pair<int, int> ap[n];
    for (int i = 0; i < n; i++) {
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap, ap + n); // Using the sort function
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        int old_position = ap[i].second;
        if (visited[i] == true || old_position == i) {
            continue;
        }
        int node = i;
        int cycle = 0;
        while (!visited[node]) {
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle += 1;
        }
        ans += (cycle - 1);
    }
    return ans;
}

int main() {
    vector<int> arr{5, 4, 3, 2, 1};
    cout << countMinSwaps(arr) << endl;
    return 0;
}
