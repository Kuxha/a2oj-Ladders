#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s[128];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    sort(s,s+n);
    cout<<s[n/2];

    
    return 0;
} 
 