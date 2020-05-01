#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s;
    cin>>s;

    set<char> st;
    for(int i=0;i<s.length();i++){

        st.insert(s[i]);



    }

    int l = st.size();
    string ans = (l%2==0)?"CHAT WITH HER!":"IGNORE HIM!";
    cout<<ans;

    return 0;
} 

