#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solve(vector<int>& arr, int n, int k) {
    int i = 0, j = 0;
    int sum = 0;
    int maxi = INT_MIN;
  
    while (j < n) {
        sum += arr[j];

        while (i <= j && sum > k) { 
            sum -= arr[i];
            i++;
        }

        if (sum == k) {
            maxi = max(maxi, j - i + 1);
        }

        j++; 
    }

    return (maxi == INT_MIN) ? 0 : maxi;  
}

int main() { 
    int n, k;
    cin >> n >> k; 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {   
        cin >> arr[i]; 
    }
    int ans = solve(arr, n, k);
    cout << "Longest Subarray with sum " << k << " is: " << ans << endl;

    return 0;
}
