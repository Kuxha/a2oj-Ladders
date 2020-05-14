#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string x;
    string y;
    cin>>x>>y;

    reverse(x.begin(),x.end());

    if(x==y)
        cout<<"YES";
    else
        cout<<"NO";

    


    
    
    return 0;
} 
 