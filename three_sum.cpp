#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> solve(vector<int> arr, int sum) {
    set<vector<int>> st;
    int n = arr.size();
    
    sort(arr.begin(), arr.end()); 

    for (int i = 0; i < n; i++) {
        set<int> hashset;
        for (int j = i + 1; j < n; j++) {
            int k = sum - (arr[i] + arr[j]);
            if (hashset.find(k) != hashset.end()) {
                vector<int> temp = {arr[i], arr[j], k};
                sort(temp.begin(), temp.end()); 
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    
    return vector<vector<int>>(st.begin(), st.end());
}

int main() {
    int n, k;
    cin >> n >> k;  

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> ans = solve(arr, k);

    for (auto &triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
