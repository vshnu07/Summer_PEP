#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[4][4] = {
        6,11,4,10,
        13,1,15,2,
        8,12,5,14,
        3,16,9,7
    };
    int tr = 0, br = 3, lc = 0, rc = 3;
    while(tr <= br && lc <= rc){
        for(int i = lc; i <= rc; i++)
            cout << arr[tr][i] << " ";
        tr++;
        for(int i = tr; i <= br; i++)
            cout << arr[i][rc] << " ";
        rc--;
        if(tr <= br){
            for(int i = rc; i >= lc; i--)
                cout << arr[br][i] << " ";
            br--;
        }
        if(lc <= rc){
            for(int i = br; i >= tr; i--)
                cout << arr[i][lc] << " ";
            lc++;
        }
    }
    return 0;
}