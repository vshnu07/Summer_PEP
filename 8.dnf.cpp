#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={0,1,1,0,1,2,1,2,0,0,0,1};
  int n=arr.size(),l=0,m=0,h=n-1;
  while(m<=h){
      if(arr[m]==0){
          swap(arr[l],arr[m]);
          l++,m++;
      }
      else if(arr[m]==1) m++;
      else{
          swap(arr[m],arr[h]);
          h--;
      }
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}