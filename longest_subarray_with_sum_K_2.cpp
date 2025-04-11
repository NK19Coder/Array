#include <iostream>
#include<vector>
#include<climits>
#include<unordered_map>
#include<bitset>

using namespace std;
int longarr(vector<int> arr,int n,int k){
  unordered_map<int,int>mp;
  int sum=0;
  int maxi=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==k) maxi=i+1;
    if(mp.find(sum-k)!=mp.end()){
      maxi=max(maxi,i-(mp[sum-k]));
    }
    if(mp.find(sum)==mp.end())
      mp[sum]=i;
    
  }
  return maxi;
}


int main() {
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 int res=longarr(arr,n,7);
  cout<<res;
  
}