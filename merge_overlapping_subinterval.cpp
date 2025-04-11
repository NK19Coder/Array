#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> solve(vector<vector<int>>arr, int n, int m) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
      int start = arr[i][0];
      int end = arr[i][1];

      if(!ans.empty() && end<=ans.back()[1]){
        continue;
      } 
      for(int j=i+1; j<n; j++){
        if(arr[j][0]<=end){
          end = max(end,arr[j][1]);
        }
        else{
          break;
        }
      }
      ans.push_back({start,end});
    }
  return ans;
}
 
int main() {
    int n;
    int m;  
    cin>>n>>m; 
     vector<vector<int>> arr(n, vector<int>(m)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    } 

    vector<vector<int>>ans = solve(arr,n,m);

    for(int i=0; i<ans.size(); i++){
      cout<<"( ";
      for(int j=0; j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
      }
      cout<<"), ";
    } 

    

    return 0;
}  
