#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits> 
using namespace std; 

void solve(vector<int> &arr, int n){
    int j=0; 
    for(int i=0; i<n; i++){
      if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
      }
    }
}

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n);
  for(int i=0; i<n; i++){ 
    cin >> arr[i];
  }

  solve(arr,n);
  for(int i=0; i<n ; i++){
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
