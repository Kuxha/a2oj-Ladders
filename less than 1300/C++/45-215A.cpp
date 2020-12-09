#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s[128];

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m;
    cin>>m;

    int q[11000]={0};
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }  

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]%a[j]==0){
                q[b[i]/a[j]]++;
            }
        }
    }

    int ans = 0;
    for(int i=10999;i>=0;i--){

        if(q[i]!=0){
            ans = q[i];
            break;
        }
    }

    cout<<ans;
    
    return 0;
} 
 