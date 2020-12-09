#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s;
    cin>>s;
    int one=0,two=0,three=0;
    for(int i=0;i<s.length();i++){

        if(s[i]=='1'){
            one++;
        }else if(s[i]=='2'){
            two++;
        }else if(s[i]=='3'){
            three++;
        }

    }

    string ans = "";

    while(one--){
        ans = ans + "1";
        ans = ans + "+";
    }
    while(two--){
        ans = ans+ "2";
        ans = ans + "+";
    }   
    while(three--){
        ans = ans + "3";
        ans = ans + "+";
    } 

    for(int i=0;i<ans.length()-1;i++){
        cout<<ans[i];
    }




    return 0;
} 

