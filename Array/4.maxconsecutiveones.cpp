#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={1,1,0,1,1,1};
  int n=arr.size(),c=0,mc=0;
  for(int i=0;i<n;i++){
      if(arr[i]==1){
          c++;
          mc=max(c,mc);
      }
      else c=0;
  }
  cout<<mc;
  return 0;
}