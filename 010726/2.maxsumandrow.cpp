#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int arr[3][3]={1,1,1,1,1,1,1,1,1};
  int ms=0,row=0;
  for(int i=0;i<3;i++){
      int sum=0;
      for(int j=0;j<3;j++){
         sum+=arr[i][j];
      }
         if(sum>=ms){
             ms=sum;
             row=i;
         }
  }
  cout<<ms<<" "<<row;
  return 0;
}
