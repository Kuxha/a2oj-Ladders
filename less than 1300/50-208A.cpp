#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s;
    cin>>s;
    while(~s.find("WUB")){
        s.replace(s.find("WUB"),3," ");
    }

    cout<<s;
    return 0;
} 
 