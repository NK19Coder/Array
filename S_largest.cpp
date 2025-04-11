#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits>
using namespace std; 

int solve(vector<int> arr, int n){
  int maxi = INT_MIN;
  int s_largest = -1; 
  int i =0;
  for(int i=0 ; i<n; i++){
    if(arr[i]>maxi){
      s_largest = maxi;
      maxi = arr[i];
    }
    else if(arr[i]<maxi && arr[i]>s_largest){
      s_largest = arr[i]; 
    }
  }
  return s_largest; 
} 

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n);
  for(int i=0; i<n; i++){ 
    cin >> arr[i];
  }
  int ans = solve(arr, n);
  cout << ans << endl; 
  return 0;
}
