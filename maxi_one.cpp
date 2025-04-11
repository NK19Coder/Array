#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int solve(vector<int> &arr, int n) {
    int count =0;
    int maxi = INT_MIN;
    for(int i=0; i<n ; i++){  
      if(arr[i] == 1){
        count++;
      } 
      else {
        maxi = max(maxi,count);
        count =0;
      }
    } 
    maxi = max(maxi,count);
  return maxi;
}

int main() {
    int n;
    cin >> n;  
    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {   
        cin >> arr[i];
    }

    int ans = solve(arr, n);
    cout << "Max Cons. One's are : " << ans << endl; 
  
    return 0;
}
