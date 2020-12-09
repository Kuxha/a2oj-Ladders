#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int k;
    int a[12];
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>a[i];
    }

    sort(a,a+12);
    if(k==0){
        cout<<0;
        return 0;
    }

    int ans = 0;
    for(int i=11;i>=0;i--){

        ans = ans + a[i];
        if(ans>=k){
            cout<<(12-i);
            return 0;
        }
    }
    cout<<"-1";
    return 0;
} 
 