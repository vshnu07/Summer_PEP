#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int arr[4][4]={6,11,4,10,13,1,15,2,8,12,5,14,3,16,9,7};
  
  for(int c=0;c<4;c++){
      if(c%2==0){
          for(int r=0;r<4;r++){
              cout<<arr[r][c]<<" ";
          }
      }
      else{
          for(int r=3;r>=0;r--){
              cout<<arr[r][c]<<" ";
          }
      }
  }
  return 0;
}

