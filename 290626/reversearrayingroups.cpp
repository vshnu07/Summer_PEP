#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={1, 2, 3, 4, 5};
  int n=arr.size(),k=3;
  for(int i=0;i<n;i+=k){
      int s=i,e=min(i+k-1,n-1);
      
      while(s<e){
          swap(arr[s++],arr[e--]);
      }
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}