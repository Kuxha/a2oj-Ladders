#include<bits/stdc++.h>
using namespace std;
 
void to_upper(char& ch) {
    ch = toupper(static_cast<unsigned char>(ch));
}
 
void to_lower(char& ch) {
    ch = tolower(static_cast<unsigned char>(ch));
}
int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    string s;
    cin>>s;
 
    int n = s.length();
    int u = 0;
    int l = 0;
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            u++;
        }else{
            l++;
        }
    }
 
    if(l>=u){
        for_each(s.begin(),s.end(),to_lower);
 
    }else{
        for_each(s.begin(),s.end(),to_upper);
 
    }
 
    cout<<s;
    return 0;
} 