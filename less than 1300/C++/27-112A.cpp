

#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 


    string s;
    string t;
    cin>>s>>t;
    
    int a,b;

    for(int i=0;i<s.length();i++){
        a=tolower(s[i]);
        b=tolower(t[i]);

        if(a<b){
            cout<<"-1";
            return 0;
        }

        if(a>b){
            cout<<"1";
            return 0;
        }
    }

    cout<<"0";
    return 0;

} 

