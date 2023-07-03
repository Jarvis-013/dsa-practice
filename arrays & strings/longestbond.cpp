// my method
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> longestBound(vector<int> arr)
{
    unordered_set<int> s;
    vector<int> temp;
    vector<int> result;
    int count = 0;
    int largest = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i] - 1;
        int y = arr[i] + 1;
        if (s.find(x) != s.end() || s.find(y) != s.end())
        {
            count++;
            if (s.find(x) != s.end())
                temp.push_back(x);
            else
                temp.push_back(y);
        }
        else{
            temp.clear()
        }
        if (count > largest)
        {
            largest = max(largest, count);
            result = temp;
        }
        s.insert(arr[i]);
    }
    return result;
}

int main()
{
    vector<int> ar = {1,8,2,5,3,4};
    auto p = longestBound(ar);
    for (auto c : p)
        cout << c << ",";
    return 0;
}


// better method

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int largestband(vector<int> arr){
    int n=arr.size();
    unordered_set<int> s;
    int largest=0;
    // Data inside a set
    for(int x:arr){
        s.insert(x);}
        //iterate over the arr
        for(auto element:s){
            int parent=element-1;
            if(s.find(parent)==s.end()){
                //find entire band startingfrom element
                int next_no=element+1;
                int cnt=1;
                while(s.find(next_no)!=s.end()){
                    next_no++;
                    cnt++
                }
                if(cnt>largest)
                largest=cnt;

            }
        }
return largest;
    }
int main(){
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6}
   cout<<largest(arr);
return 0;
}
