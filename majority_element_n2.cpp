#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solve(vector<int> &arr, int n){
  unordered_map<int,int> mpp; 
  for(int i=0; i<n; i++){
    mpp[arr[i]]++; 
  }
  for(auto i: mpp){
    if(i.second>n/2){
      return i.first;
    }
  }
  return 0; 

}

int main() {
  int n;
  cin>>n;
  vector<int>arr(n); 
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int element = solve(arr, n);
  cout<<"Majority Element greater than n/2 is : "<<element;

  return 0;
}