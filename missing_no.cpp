#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &arr, int n) {
    int xor1 = 0;
    for (int i = 1; i <= n; i++) {  
        xor1 ^= i;
    }
    
    int xor2 = 0;
    for (int i = 0; i < n - 1; i++) { 
        xor2 ^= arr[i];
    }
    
    return xor1 ^ xor2;  
}

int main() {
    int n;
    cin >> n;  

    vector<int> arr(n - 1);  
    for (int i = 0; i < n - 1; i++) {   
        cin >> arr[i];
    }

    int ans = solve(arr, n);
    cout << "Missing Number: " << ans << endl; 
  
    return 0;
}
