#include<bits/stdc++.h>
using namespace std;
/*
int main() {
  // write your code here...
  vector<int>arr={12, 35, 1, 10, 34, 1};
  int l=-1,sl=-1;
  int n=arr.size();
  for(int i=0;i<n;i++){
      if(arr[i]>l){
          sl=l;
          l=arr[i];
      }
      else if(arr[i]>sl) sl=arr[i];
  }
  cout<<sl;
  return 0;
}
  */


  //third largest

  int main(){
    vector<int>arr={12, 35, 1, 10, 34, 1};
    int n=arr.size(),l=-1,sl=-1,tl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            tl=sl;
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl){
            tl=sl;
            sl=arr[i];
        }
        else if(arr[i]>tl) tl=arr[i];
    }
    cout<<tl;
    return 0;
  }