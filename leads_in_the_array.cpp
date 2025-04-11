#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 
#include <climits>
using namespace std;

vector<int> solve(vector<int> &arr, int n){
  vector<int> leads; 
  int maxi = INT_MIN; 
  for(int i=n-1; i>=0; i--){
    if(arr[i]>maxi){
      leads.push_back(arr[i]);
      maxi = arr[i];
    }
  }
  return leads;
}

int main() {
  int n;
  cin>>n;
  vector<int>arr(n); 
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<int> ans = solve(arr, n);
  reverse(ans.begin(),ans.end());
  for(int i=0; i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

  return 0;
}