#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <bitset>
using namespace std;

int solve(vector<int> arr, int n) {
    int xor1 = 0;
    for(int i=0; i<n; i++){
      xor1 ^= arr[i];
    }
    return xor1;   
}

int main() { 
    int n;
    cin >> n;  
    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {   
        cin >> arr[i]; 
    }

    int ans = solve(arr, n);
    cout << "Element coming single : " << ans << endl; 
  
    return 0;
}
