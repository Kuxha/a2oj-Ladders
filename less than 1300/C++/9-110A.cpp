#include<bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    long long n;
    cin>>n;
    int l = 0;
    while(n){

    	if(n%10 == 4 || n%10==7){
    		l++;
    	}
    	n = n/10;


    }
    if(l==0){
    	cout<<"NO";
    	return 0;
    }
    while(l){

    	if(l%10!=4 && l%10!=7){
    		cout<<"NO";
    		return 0;
    	}
    	
    	l = l/10;
    }

    cout<<"YES";
    return 0;
} 

