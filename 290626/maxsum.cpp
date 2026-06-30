#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr{2, 3, -8, 7, -1, 2, 3};
  int currentsum=0,maxsum=arr[0];
    int n=arr.size();
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum>maxsum) maxsum=currentsum;
        if(currentsum<0) currentsum=0;
        }
    cout<<maxsum;
  return 0;
}