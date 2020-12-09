#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;
    int x[n];
    int y[n];

    int l=0,r=0,u=0,d=0;
    int ans = 0;

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++){
        l=0,r=0,u=0,d=0;
        for(int j=0;j<n;j++){


            if(i==j){
                continue;
            }

            if(x[j]>x[i] && y[j]==y[i]){
                r++;
            }


            if(x[j]<x[i] && y[j]==y[i]){
                l++;
            }


            if(x[j]==x[i] && y[j]<y[i]){
                u++;
            }


            if(x[j]==x[i] && y[j]>y[i]){
                d++;
            }
        }


        if(l>0 && r>0 && u>0 && d>0){
            ans++;
        }
    }

    cout<<ans;


    return 0;
} 

