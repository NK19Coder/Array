#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits>
using namespace std; 

int solve(vector<int> arr, int n){
  int maxi = INT_MIN;
  for(int i=0; i<n; i++){           
    maxi = max(arr[i],maxi);
  }
  return maxi; 
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
