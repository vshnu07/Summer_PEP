#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1, 4, 45, 6, 10, 8};
    int target=13;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==target) cout<<"true";
            else if(sum>target) k--;
            else j++;
        }
    }
    cout<<"false";
    return 0;
}