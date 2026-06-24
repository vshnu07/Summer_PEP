#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={4,2,5,7,2};
  int n=arr.size();
  int max=arr[0];
  for(int i=0;i<n;i++){
      if(arr[i]>max) max=arr[i];
  }
  cout<<max;
  return 0;
}