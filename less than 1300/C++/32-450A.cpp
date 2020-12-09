#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n,m;
    cin>>n>>m;
    int a[n];
    int done = n;
    int ans = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(done>0){
        for(int i=0;i<n;i++){

            if(a[i]>0){
            a[i] = a[i] - m;

            if(a[i]<=0){
                ans = i+1;
                done--;
            }
            }
        }
    }

    cout<<ans;


} 

