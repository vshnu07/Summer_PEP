#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={0,1,0,1,1,0,0};
  int n=arr.size();
  int ones=0,k=0,mo=0,co=0;
  for(int i=0;i<n;i++){
      if(arr[i]==1) ones++;
  }
  k=ones;
  for(int i=0;i<k;i++){
      if(arr[i]==1) co++;
  }
  mo=co;
  for(int i=k;i<n+k-1;i++){
      co=co-arr[(i-k)%n]+arr[i%n];
      if(co>mo) mo=co;
  }
  cout<<ones-mo;
  return 0;
}