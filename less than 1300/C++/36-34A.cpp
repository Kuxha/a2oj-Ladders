#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;
    int a[n];
    int diff[n];

    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    for(int i=0;i<n-1;i++){

        diff[i] = abs(a[i]-a[i+1]);
       
    }

    diff[n-1] = abs(a[n-1]-a[0]);

    int mind = 100000,ans = 1;

    for(int i=0;i<n;i++){
      // cout<<diff[i]<<" ";
       if(mind>diff[i]){
        mind = diff[i];
        ans = i;

       }
    }
    ans++;

    int x = ;
    int y = (ans+1)%n;
    cout<<(ans+1)<<" "<<(((ans+1)%n)+1);
    return 0;
} 

