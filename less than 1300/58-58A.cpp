#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    string s;
    cin>>s;
    int n = s.length();
    string h = "hello";
    int j = 0;
    for(int i=0;i<n;i++){
    	if(s[i]==h[j]){
    		
    			j++;
    	}

    	if(j==4){
    		break;
    	}
    }


    if(j>=4){
    	cout<<"YES";
    }else{
    	cout<<"NO";
    }
    return 0;
} 
 