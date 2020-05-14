#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int k;
    cin>>k;
    string s;
    cin>>s;
    int a[26] = {0};
    int n = s.length();

    for(int i=0;i<n;i++){
       // cout<<(int)'a'<<" ==  ";
        //cout<<(int)s[i]-(int)'a'<<"  ||  ";
        a[(int)s[i]-(int)'a']++;
    }

    for(int i=0;i<26;i++){
        //cout<<a[i]<<" - ";
        if(a[i]%k!=0){
            cout<<"-1";
            return 0;
        }
    }


    string sb = "";
 
    for (int i = 0; i < 26; i++) {
        a[i] = a[i]/k;
        int ascii = i + (int)'a';
        char c = (char) ascii;
        

        for (int j = 0; j < a[i]; j++) {
 
                sb = sb + c;
 
             }
        }
                
    string ans = "";
                
    for (int i = 0; i < k; i++) {
        ans = ans + sb;
    }


    cout<<ans;
    return 0;
} 
 