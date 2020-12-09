#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;

    int a,b;
    int curr = 0;
    int ans = 0;

    for(int i=0;i<n;i++){
        cin>>a>>b;

        curr = (b-a )+ curr;
        ans = max(ans,curr);


    }
    

    cout<<ans;

    return 0;
} 

