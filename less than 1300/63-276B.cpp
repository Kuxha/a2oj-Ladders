#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    string s;
    cin>>s;

    int a[26]= {0};
    for(int i=0;i<s.length();i++){

        a[(int)s[i]-(int)'a']++;
    }

    int odd = 0;

    for(int i=0;i<26;i++){
        if(a[i]%2!=0){

            odd++;
        }
    }

    if((odd==0)||(odd%2)==1){
        cout<<"First";
    }else{
        cout<<"Second";
    }
    
    return 0;
} 
 