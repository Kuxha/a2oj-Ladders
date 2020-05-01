#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int m;
    cin>>m;

    while(m--){


    string s;
    cin>>s;


    int n = s.length();
    if(n<=10){
        cout<<s;
    }else{
        cout<<s[0]<<n-2<<s[n-1];
    }
    cout<<"\n";

    }
    return 0;
} 

