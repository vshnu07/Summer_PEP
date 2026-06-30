#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={7, 9, 1, 3, 5};
  int target=6;
  int n=arr.size(),pivot=0;
  for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
          pivot=i+1;
          break;
      }
  }
  int l=pivot,r=(pivot-1+n)%n,sum=0;
  
  while(l!=r){
      sum=arr[l]+arr[r];
      
      if(sum==target){
          cout<<"true";
          return 0;
      }
      else if(sum>target){
          r=(r-1+n)%n;
      }
      else l=(l+1)%n;
  }
  cout<<"false";
  return 0;
}