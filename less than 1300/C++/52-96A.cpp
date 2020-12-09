#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    string s;
    cin>>s;

    if(s.find("1111111")==s.npos && s.find("0000000")==s.npos)
    	cout<<"NO";
    else
    	cout<<"YES";

    return 0;
} 
 