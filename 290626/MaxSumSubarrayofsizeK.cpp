#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={1, 4, 2, 10, 23, 3, 1, 0, 20};
  int k=4;
  int n=arr.size(),ms=0,cs=0;
        for(int i=0;i<k;i++){
            cs+=arr[i];
        }
        ms=cs;
        for(int i=k;i<n;i++){
            cs=cs-arr[i-k]+arr[i];
            if(cs>ms) ms=cs;
        }
    cout<<ms;
  return 0;
}