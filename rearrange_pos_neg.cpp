#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> solve(vector<int> &arr, int n){
  vector<int> ans(n);
  int pos =0;
  int neg = 1; 
  for(int i=0; i<n; i++){
    if(arr[i]>0){
      ans[pos] = arr[i];
      pos += 2;
    }
    else if(arr[i]<0){
      ans[neg] = arr[i];
      neg += 2;
    }
  } 
   return ans;
}

int main() {
  int n;
  cin>>n;
  vector<int>arr(n); 
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<int> ans = solve(arr, n);
  for(int i=0; i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

  return 0;
}