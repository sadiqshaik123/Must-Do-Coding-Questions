#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int arrlen=end(arr)-begin(arr);
    int k=4;
    for(int i=0;i<arrlen;i++){
        if(arr[i]==k){
            cout<<i<<endl;
        }
    }
}
