#include<bits/stdc++.h>
using namespace std;
/*
int main() {
  // write your code here...
  vector<int>arr={1, 2, 3, 4, 5, 6, 7};
  int n=arr.size(),k=2;
  vector<int>temp1;
  for(int i=0;i<k;i++){
      temp1.push_back(arr[i]);
  }
  for(int i=k;i<n;i++){
      arr[i-k]=arr[i];
  }
 
  for(int i=n-k;i<n;i++){
      arr[i]=temp1[(i+k)-n];
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  vector<int>arr1={1, 2, 3, 4, 5, 6, 7};
  vector<int>temp2;
  for(int i=n-k;i<n;i++){
      temp2.push_back(arr1[i]);
  }
 for(int i=n-k-1;i>=0;i--){
     arr1[i+k]=arr1[i];
 }
  for(int i=0;i<k;i++){
      arr1[i]=temp2[i];
  }
  for(int i=0;i<n;i++){
      cout<<arr1[i]<<" ";
  }
  return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int>arr={1, 2, 3, 4, 5, 6, 7};
  int n=arr.size(),k=2;
  reverse(arr.begin(),arr.begin()+k);
  reverse(arr.begin()+k,arr.end());
  reverse(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  vector<int>arr1={1, 2, 3, 4, 5, 6, 7};
  reverse(arr1.begin(),arr1.end()-k);
  reverse(arr1.end()-k,arr1.end());
  reverse(arr1.begin(),arr1.end());
  
  for(int i=0;i<n;i++){
      cout<<arr1[i]<<" ";
  }
  return 0;
}