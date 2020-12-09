#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    string s;
    cin>>s;
    char x;

    for(int i=0;i<s.length();i++){
    	x = char(tolower(s[i]));

    	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y'){
    		continue;
    	}else{
    		cout<<"."<<x;
    	}
    }
    return 0;
} 
 