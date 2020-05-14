#include<bits/stdc++.h>
using namespace std;

bool is_magical(string num){


    for(int i=0;i<(int)num.size();i++){
        if(num[i]!='1' && num[i]!='4'){
            return false;
        }
    }


    if(num[0]=='4')
        return false;

    if(num.find("444") != num.npos)
        return false;

    return true;

}
int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s;
    cin>>s;

    if(is_magical(s))
        cout<<"YES";
    else 
        cout<<"NO";
    
    return 0;
} 
 