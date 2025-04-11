#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool solve(vector<int> arr, int n, int sum){
  unordered_map<int, int> mpp; 
  for(int i=0; i<n; i++){
    int a = arr[i];
    int more = sum-a;
    if(mpp.find(more)!= mpp.end()){
      return true;
    }
    mpp[a]=i; 
  }
  return false;
}

int main() {
  int n;
  cin>>n;
  int sum;
  cin>>sum;
  vector<int>arr(n); 
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  bool ans = solve(arr, n, sum);
  if(ans){cout<<"The sum exists";}
  else{cout<<"The sum does not exists";}
  return 0;
}