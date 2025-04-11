#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

int solve(vector<int> &arr, int n){
  int sum =0;
  int maxi = INT_MIN;  
  for(int i=0; i<n; i++){
    sum+=arr[i];
    if(sum>maxi){
      maxi = sum;
    }
    else if(sum<0){
      sum=0;
    }
  }
return maxi; 
}

int main() {
  int n;
  cin>>n;
  vector<int>arr(n); 
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int element = solve(arr, n);
  cout<<"Max subarray sum is : "<<element;

  return 0;
}