// my method bruteforce time complexity O(n2)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       int n,sum;;
       cin>>n>>sum;
       vector<int> arr;
       for(int i=0;i<n;i++)
       {
           int temp;
           cin>>temp;
           arr.push_back(temp);
       }
       for(int i=0;i<n;i++)
       {int j;
           for(j=0;j<n;j++)
           {
               if((arr[i]+arr[j])==sum)
               {
                   cout<<arr[i]<<arr[j];
                   break;
               }
              
           } if((arr[i]+arr[j])==sum)
               break;
       }
       
    }

    return 0;
}

// using unordere set time complexity O(n)

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector <int> pairsum(vector<int> arr,int sum)
{
unordered_set<int> s;
vector<int> result;

for(int i=0;i<arr.size();i++)
{
    int x=sum-arr[i];
    if(s.find(x)!=s.end()){
        result.push_back(x);
        result.push_back(arr[i]);
        return result;
    }
    s.insert(arr[i]);
}
return {};
}

int main(){
    vector<int> arr{10,5,3,2,-6,9};
    int s = 4;
    auto p=pairsum(arr,s);
    if(p.size()==0)
    cout<<"NO PAIR FOUND";
    else
    cout<<p[0]<<","<<p[1]<<endl;
return 0;
}
