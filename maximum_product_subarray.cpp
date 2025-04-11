#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

int solve(vector<int> arr, int n){
  int prefix=1;
  int suffix=1;
  int maxi = INT_MIN;

  for(int i=0; i<n-1; i++){
    if(prefix == 0) prefix = 1;
    if(suffix == 0) suffix = 1;  
    prefix = prefix*arr[i];
    suffix = suffix*arr[n-i-1];
    maxi = max(maxi, max(prefix,suffix));
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
    
    int element = solve(arr,n);
    cout<<"Maximum Product Sub-Array is : "<<element; 

    

    return 0;
}  
