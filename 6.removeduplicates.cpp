#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={1,1,2};
  int n=arr.size(),i=0;
  for(int j=i+1;j<n;j++){
      if(arr[i]!=arr[j]){
          arr[i+1]=arr[j];
          i++;
      }
  }
  cout<<i+1;
  return 0;
}