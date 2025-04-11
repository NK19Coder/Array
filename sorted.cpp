#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits>
using namespace std; 

bool solve(vector<int> arr, int n){
  // bool sorted = false;
  for(int i=1; i<n; i++){
    if(arr[i]<arr[i-1]){ 
      return false;
    }
  }
  return true;
} 

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n);
  for(int i=0; i<n; i++){ 
    cin >> arr[i];
  }
  bool ans =solve(arr,n);
  if(ans){cout<<"Sorted";}
  else{cout<<"Not sorted";}
  return 0;
}
