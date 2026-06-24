#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={1,2,3,4,5};
  int n=arr.size();
  for(int i=1;i<n;i++){
      arr[i]+=arr[i-1];
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}