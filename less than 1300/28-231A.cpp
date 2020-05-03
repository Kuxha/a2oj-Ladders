

#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 


    int n,a,b,c,ans = 0;
    cin>>n;


    for(int i=0;i<n;i++){
        
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            ans++;
        }

    }

    cout<<ans;
    return 0;

} 

